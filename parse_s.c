/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:22:59 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/12 16:23:04 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


f_list	parse_s(f_list block, const char *format, int i, va_list arg_list)
{
	char *s;
	int k;

	// printf ("\n\n\n");
	k = 0;
	s = va_arg(arg_list, char *);
	// printf ("%s", s);
	return (block);
}
