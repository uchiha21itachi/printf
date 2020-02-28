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

char		*get_number_u(va_list arg_list, f_list block)
{
	unsigned int num;
	char *num_str;
	int i;

	i = 0;
	num =  va_arg(arg_list, unsigned int);
	if (num < 0)
		num= 4294967296 - num;	
	num_str = ft_utoa(num);
	if (block.p_avail)
	{
		if (block.precision == 0 && num == 0)
			num_str[0] = '\0';
	}
	(void)(block);
	return (num_str); 
}

f_list		print_number_u(f_list block, char *num, int zeros, int spaces)
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

f_list		check_zeros_u(char *num, f_list block, int spaces)
{
	int zeros;

	if (block.precision > ft_strlen(num))
	{
		zeros = block.precision - ft_strlen(num);
		if (num[0] == '-')
			zeros++;
		spaces = spaces - zeros;
	}
	else if (((!block.p_avail) && block.zero_flag && block.minus_flag == 0))
	{
		zeros = spaces;
		spaces = 0;
	}
	else if ((block.zero_flag) && !(block.minus_flag) && (block.precision < 0))
	{
		zeros = spaces;
		spaces = 0;
	}
	else
		zeros = 0;
	block = print_number_u(block, num, zeros, spaces);
	return (block);
}

f_list		parse_u(f_list block, va_list arg_list)
{
	char	*num;
	int		spaces;

	num = get_number_u(arg_list, block);
	if (block.width > ft_strlen(num))
		spaces = block.width - ft_strlen(num);
	else
		spaces = 0;
	block = check_zeros_u(num, block, spaces);
	free (num);
	return (block);
}