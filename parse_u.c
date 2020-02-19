/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:10:08 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/19 18:10:10 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

f_list		parse_u(f_list block, va_list arg_list)
{
	// unsigned int num;

	// num = va_arg(arg_list, unsigned int);
	block = parse_d(block, arg_list);
	return (block);
}