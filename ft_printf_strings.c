/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_strings.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:51:17 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/10 19:51:19 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


f_list	convert_strings(f_list block, const char *format, int i, va_list arg_list)
{
	char *s;
	int k;

	printf ("\n\n\n");
	k = 0;
	while ((s = va_arg(arg_list, char *)))
	{
	    printf ("%c\n", s[k]);
		k++;
	}
	return (block);
}
