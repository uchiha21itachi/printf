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

int		is_flag(char c)
{
	if (c == '-' || c == '0')
		return (1);
	return (0);
}

f_list		update_flags(char c, f_list block)
{
	if (c == '-')
		block.minus_flag = 1;
	if (c == '0')
		block.zero_flag = 1;
	return (block);
}

f_list		check_stars(f_list block, const char *format, int i, va_list arg_list)
{
	while (format[++i] != '\0' && (!(is_specifier(format[i]))))
	{
		if (format[i] == '.')
		{
			i++;
			if (format[i] == '*')
			{
				block.p_star = 1;
				block.p_avail = 1;
				block.precision = va_arg(arg_list, int);
			}
		}
		else if (format[i] == '*')
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
