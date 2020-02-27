/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:25:23 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/16 06:06:56 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

f_list		set_init_data(f_list block)
{

	block.precision = 0;
	block.p_avail = 0;
	block.p_star = 0;
	block.width = 0;
	block.w_star = 0;
	block.zero_flag = 0;
	block.minus_flag = 0;
	return (block);
}

f_list		parse_flags(f_list block, const char *format, int i)
{
	while (!(is_specifier(format[i++])))
	{
		while (is_flag(format[i]))
			block = update_flags(format[i++], block);
		while (ft_isdigit(format[i]))
			block.width = (block.width * 10) + (format[i++] - 48);
		if (format[i] == '.' && block.p_avail == 0)
		{
			block.p_avail = 1;
			if (!(ft_isdigit(format[i + 1])))
				block.precision = 0;
			while (ft_isdigit(format[++i]))
				block.precision = (block.precision * 10) + (format[i] - 48);
			i--;
		}
	}
	return (block);
}

f_list		parse(f_list block, const char *format, int i, va_list arg_list)
{
	while (!(is_specifier(format[i])))
		i++;
	if (format[i] == 's')
		block = parse_s(block, arg_list);
	else if (format[i] == 'c')
		block = parse_c(block, arg_list);
	else if (format[i] == 'p')
		block = parse_p(block, arg_list);
	else if (format[i] == 'd' || format[i] == 'i')
		block = parse_d(block, arg_list);
	else if (format[i] == 'u')
		block = parse_u(block, arg_list);
	else if (format[i] == 'x')
		block = parse_x(block, arg_list);
	else if (format[i] == 'X')
		block = parse_X(block, arg_list);
	return (block);
}

f_list		set_data(f_list block, int i, const char *format, va_list arg_list)
{
	block = set_init_data(block);
	block = check_stars(block, format, i, arg_list);
	block = parse_flags(block, format, i);
	block = parse(block, &format[0], i, arg_list);

	return (block);
}

int			check_mod(const char *format, int i)
{
	int result;

	result = 0;
	if (format[i + 1] != '\0')
		i++;
	else
	{
		result = -1;
		return (result);
	}
	while (!(is_specifier(format[i])) && format[i] != '%' && format[i] != '\0')
		i++;
	if (format[i] == '%')
		result = 1;
	return (result);
}

int			ft_printf(const char *format, ...)
{
	va_list			arg_list;
	int				i;
	int				temp;
	f_list			block;

	i = -1;
	temp = 0;
	block.count = 0;
	va_start(arg_list, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{	
			temp = check_mod(format, i);
			if (temp == 1)
				block = print_mod(block, i, format, arg_list);
			else
				block = set_data(block, i, format, arg_list);
			while ((!(is_specifier(format[++i])) && (format[i] != '%')));
		}
		else
			block.count += write(1, &format[i], 1);
		
	}
	va_end(arg_list);
	return (block.count);
}
