/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 16:45:48 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/28 16:46:05 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*convert_x(long long num, int base, t_list block)
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
	free(representation);
	if (ptr[0] == '0' && block.precision == 0 && block.p_avail)
		ptr[0] = '\0';
	return (ptr);
}

t_list		parse_x(t_list block, va_list arg_list)
{
	unsigned int	x;
	char			*str;
	int				spaces;

	x = va_arg(arg_list, unsigned int);
	str = convert_x(x, 16, block);
	if (block.width > ft_strlen(str))
		spaces = block.width - ft_strlen(str);
	else
		spaces = 0;
	block = check_zeros(str, block, spaces);
	return (block);
}
