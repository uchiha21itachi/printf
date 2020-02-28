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

char		*get_number(va_list arg_list, t_list block)
{
	int		num;
	char	*num_str;
	int		i;

	i = 0;
	num = va_arg(arg_list, int);
	num_str = ft_itoa(num);
	if (block.p_avail)
	{
		if (block.precision == 0 && num_str[0] == '0')
			num_str[0] = '\0';
	}
	return (num_str);
}

t_list		print_number_minus(t_list block, char *num, int zeros, int spaces)
{
	int i;

	i = 0;
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
	return (block);
}

t_list		print_number(t_list block, char *num, int zeros, int spaces)
{
	int i;

	i = 0;
	if (block.minus_flag)
		block = print_number_minus(block, num, zeros, spaces);
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

t_list		check_zeros(char *num, t_list block, int spaces)
{
	int zeros;

	if (block.precision >= ft_strlen(num))
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
	else if ((block.precision < 0 && block.zero_flag && !(block.minus_flag)))
	{
		zeros = spaces;
		spaces = 0;
	}
	else
		zeros = 0;
	block = print_number(block, num, zeros, spaces);
	return (block);
}

t_list		parse_d(t_list block, va_list arg_list)
{
	char	*num;
	int		spaces;

	num = get_number(arg_list, block);
	if (block.width > ft_strlen(num))
		spaces = block.width - ft_strlen(num);
	else
		spaces = 0;
	block = check_zeros(num, block, spaces);
	free(num);
	return (block);
}
