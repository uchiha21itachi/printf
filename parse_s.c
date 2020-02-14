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

int		cal_output_len(f_list block, int len, int output_len)
{
	if (block.precision > block.width)
	{
		if (block.precision > len && block.width <= len)
			output_len = len;
		else if (block.precision > len && block.width > len)
			output_len = block.width;
		else if (block.precision <= len)
			output_len = block.precision;	
	}
	else if (block.width > block.precision) 
			output_len = block.width;
	else if (block.width == block.precision)
	{
		if (block.precision > len)
			output_len = block.width;
		else if (block.precision < len)
			output_len = block.precision;
		else if (block.precision == len)
			output_len = len;
	}
	return (output_len);
}

f_list	parse_s(f_list block, const char *format, int i, va_list arg_list)
{
	char	*str;
	size_t	len;
	int		output_len;

	output_len = 0;
	if ((str = ft_strdup(va_arg(arg_list, char *))) == 0)
		write(1, "Error in allocating memory from malloc\n", 39);
	len = ft_strlen(str);
	output_len = cal_output_len(block, len, output_len);
	block.count = output_len;	
	return (block);
}
