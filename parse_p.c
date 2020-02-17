/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 22:10:23 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/17 22:10:24 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

f_list	parse_p(f_list block, va_list arg_list)
{
	unsigned long long	add;

	add = va_arg(arg_list, unsigned long long);
	printf ("add - %llu", add);
	print_block(block);
	return (block);
}