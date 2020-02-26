/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_mod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 16:57:08 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/21 16:57:24 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

f_list		parse_mod(f_list block, int i, const char *format)
{
	while (format[++i] != '%' && format[i] != '\0')
	{
		while (is_flag(format[i]))
			block = update_flags(format[i++], block);
		while (ft_isdigit(format[i]))
			block.width = (block.width * 10) + (format[i++] - 48);
		if (format[i] == '.')
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

f_list		check_mod_stars(f_list block, const char *str, int i, va_list a_l)
{
	while (str[++i] != '%' && str[i] != '\0')
	{
		if (str[i] == '.')
		{
			i++;
			if (str[i] == '*')
			{
				block.p_star = 1;
				block.precision = va_arg(a_l, int);
			}
		}
		else if (str[i] == '*')
		{
			block.w_star = 1;
			block.width = va_arg(a_l, int);
		}
	}
	return (block);
}

f_list		print_with_mf(f_list block, int spaces)
{
	int j;

	j = 0;
	if (block.zero_flag)
	{
		block.count += write(1, "%", 1);
		while (j++ < spaces)
			block.count += write(1, "0", 1);
	}
	else
	{
		block.count += write(1, "%", 1);
		while (j++ < spaces)
			block.count += write(1, " ", 1);
	}
	return (block);
}

f_list		print_without_mf(f_list block, int spaces)
{
	int j;

	j = 0;
	if (block.zero_flag)
	{
		while (j++ < spaces)
			block.count += write(1, "0", 1);
		block.count += write(1, "%", 1);

	}
	else
	{
		while (j++ < spaces)
			block.count += write(1, " ", 1);
		block.count += write(1, "%", 1);
	}
	return (block);
}

f_list		print_mod(f_list block, int i, const char *format, va_list arg_list)
{
	int		spaces;

	spaces = 0;
	block = set_init_data(block);
	block = parse_mod(block, i, format);
	block = check_mod_stars(block, format, i, arg_list);
	if (block.width > 1)
		spaces = block.width - 1;
	if (block.minus_flag)
		block = print_with_mf(block, spaces);
	else
		block = print_without_mf(block, spaces);
	return (block);
}
