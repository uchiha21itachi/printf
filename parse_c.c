/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 22:11:57 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/16 06:07:27 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	parse_c(t_list block, va_list arg_list)
{
	int space_count;
	int c;

	c = va_arg(arg_list, int);
	space_count = 0;
	if (block.minus_flag)
	{
		block.count += write(1, &c, 1);
		while (space_count++ < (block.width - 1))
			block.count += write(1, " ", 1);
	}
	else
	{
		while (space_count++ < (block.width - 1))
			block.count += write(1, " ", 1);
		block.count += write(1, &c, 1);
	}
	return (block);
}
