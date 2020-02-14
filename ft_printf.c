/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:25:23 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/03 18:25:24 by yassharm         ###   ########.fr       */
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
	while (is_specifier(format[++i]))
	{
		while (is_flag(format[i]))
			block = update_flags(format[i++], block);
		while (ft_isdigit(format[i]))
			block.width = (block.width * 10) + (format[i++] - 48);
		if (format[i] == '.')
		{
			block.p_avail = 1;
			while (ft_isdigit(format[++i]))
				block.precision = (block.precision * 10) + (format[i] - 48);
			i--;
		}
	}
	return (block);
}

f_list		parse(f_list block, const char *format, int i, va_list arg_list)
{
	while (format[i] != '\0')
	{
		if (format[i] == 's')
		{
			// printf ("no\n");
			block = parse_s(block, &format[0], i, arg_list);
		}
		if (format[i] == 'c')
		{
			block = parse_c(block, &format[0], i, arg_list);
			break;
		}
		i++;
	}
	return (block);
}

f_list		set_data(f_list block, int i, const char *format, va_list arg_list)
{
	block = set_init_data(block);
	block = check_stars(block, format, i, arg_list);
	block = parse_flags(block, format, i);
	block = parse(block, &format[0], i, arg_list);
	// print_block(block);

	return (block);
}

int			ft_printf(const char *format, ...)
{
	va_list			arg_list;
	int				i;
	f_list			block;
	int				k;

	i = -1;
	block.count = 0;
	va_start(arg_list, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%' && (i = i + 1))
					block.count += write(1, "%", 1);	
			block = set_data(block, i, format, arg_list);
			while (is_specifier(format[i]))
				i++;
		}
		else
			block.count += write(1, &format[i], 1);
	}
	va_end(arg_list);
	return (block.count);
}