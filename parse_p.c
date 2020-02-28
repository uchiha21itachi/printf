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

char	*convert(long long num, int base, t_list block)
{
	static char	*representation;
	static char	buffer[50];
	char		*ptr;

	representation = ft_strdup("0123456789abcdef");
	ptr = &buffer[49];
	*ptr = '\0';
	while (1)
	{
		*--ptr = representation[num % base];
		num /= base;
		if (num == 0)
			break ;
	}
	*--ptr = 'x';
	*--ptr = '0';
	if (ft_strlen(ptr) < 4 && block.p_avail)
		ptr[2] = '\0';
	free(representation);
	return (ptr);
}

t_list	parse_p(t_list block, va_list arg_list)
{
	unsigned long long	add;
	char				*ptr;
	int					spaces;

	add = va_arg(arg_list, unsigned long long);
	ptr = convert(add, 16, block);
	if (block.width > ft_strlen(ptr))
		spaces = block.width - ft_strlen(ptr);
	else
		spaces = 0;
	block = print_string(ptr, block, spaces);
	return (block);
}
