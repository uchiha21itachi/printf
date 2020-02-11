/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:16:21 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/11 19:16:24 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

f_list	convert_digit(f_list block, const char *format, int i, va_list arg_list)
{
	int num;

	num = va_arg(arg_list, int);
	printf ("%d\n", num);

	return (block);
}
