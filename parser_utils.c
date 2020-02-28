/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 06:07:35 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/16 06:07:37 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			is_flag(char c)
{
	if (c == '-' || c == '0')
		return (1);
	return (0);
}

t_list		update_flags(char c, t_list block)
{
	if (c == '-')
		block.minus_flag = 1;
	if (c == '0')
		block.zero_flag = 1;
	return (block);
}

t_list		check_stars(t_list block, const char *f, int i, va_list arg_list)
{
	while (f[++i] != '\0' && (!(is_specifier(f[i]))))
	{
		if (f[i] == '.')
		{
			i++;
			if (f[i] == '*')
			{
				block.p_star = 1;
				block.p_avail = 1;
				block.precision = va_arg(arg_list, int);
			}
		}
		else if (f[i] == '*')
		{
			block.w_star = 1;
			block.width = va_arg(arg_list, int);
			if (block.width < 0)
			{
				block.width = -block.width;
				block.minus_flag = 1;
			}
		}
	}
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
