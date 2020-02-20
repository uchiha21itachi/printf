/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:51:35 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/18 19:51:37 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*get_number(va_list arg_list, f_list block)
{
	int num;
	char *num_str;
	int i;

	i = 0;
	num =  va_arg(arg_list, int);
	num_str = ft_itoa(num);
	if (block.p_avail)
	{
		if (block.precision <= 0)
		{
			num_str[0] = 0;
			num_str[1] = '\0';
		}
	}
	(void)(block);
	return (num_str); 
}

f_list		print_number(f_list block, char *num, int zeros, int spaces)
{
	int i;

	i = 0;
	if (block.minus_flag)
	{
		if (num[0] == '-')
		{
			block.count += write(1, "-", 1);
			num++;
		}
		while (i++ < zeros)
			block.count += write(1, "0", 1);
		block.count += ft_putstr(num, ft_strlen(num));
		i = 0;
		while (i++ < spaces)
			block.count += write(1, " ", 1);
	}
	else
	{
		while (i++ < spaces)
			block.count += write(1, " ", 1);
		i = 0;
		if (num[0] == '-')
		{
			block.count += write(1, "-", 1);
			num++;
		}
		while (i++ < zeros)
			block.count += write(1, "0", 1);
		block.count += ft_putstr(num, ft_strlen(num));
	}
	return (block);
}

f_list		check_zeros(char *num, f_list block, int spaces)
{
	int zeros;

	if (block.precision > ft_strlen(num))
	{
		zeros = block.precision - ft_strlen(num);
		if (num[0] == '-')
			zeros++;
		if ((spaces - zeros) > 0)
			spaces = spaces - zeros;
	}
	else if (!(block.p_avail) && block.zero_flag)
	{
		zeros = spaces;
		spaces = 0;
	}
	else
		zeros = 0;

	block = print_number(block, num, zeros, spaces);
	return (block);
}

f_list		parse_d(f_list block, va_list arg_list)
{
	char	*num;
	int		spaces;

	num = get_number(arg_list, block);
	if (block.width > ft_strlen(num))
		spaces = block.width - ft_strlen(num);
	else
		spaces = 0;
	block = check_zeros(num, block, spaces);
	return (block);
}
