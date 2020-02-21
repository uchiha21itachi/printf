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
	print_block(block);
	while (format[i] != '%')
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
	print_block(block);
	return (block);
}