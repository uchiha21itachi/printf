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

int		ft_num_len(num)
{
	int length;

	length = 0;
	if (num >= 0)
	{
		while (num >= 10)
		{
			num = num/10;
			length++;
		}
		length++;
	}
	return(length);
}

void		create_output(int num, int num_len, f_list block)
{
	// int i;
	// if (block.p_avail == 1)
	// {
	// 	if (block.precision > block.width)
	// 	{
	// 		if ((block.precision > num_len && block.width > num_len) || (block.precision > num_len && block.width < num_len))
	// 		{
	// 			i = -1;
	// 			while (++i < (block.precision - num_len))
	// 				block.count += write(1, "0", 1);
	// 			printf ("%d", num);+
	// 		}
	// 		else if (block.precision <= num_len && block.width <= num_len)
	// 		{
	// 			printf ("")
	// 		}
	// 	}
	// 	else if (block.width > block.precision)
	// 	{
	// 		if (block.precision > )
	// 	}
		
	// }
	// else
	// {
		
	// }
	
}

f_list	convert_digit(f_list block, const char *format, int i, va_list arg_list)
{
	int num;
	int num_len;

	num = va_arg(arg_list, int);
	num_len = ft_num_len(num);
	create_output(num, num_len, block);
	return (block);
}


/*
if only width 
	if width < num_len
	if width > num_len
if only precision 
	if p < num_len 
	if p > num_len
*/





// //if precision is available then
// 	if p <= num_len
// 		print just number
// 	if p > num_len 
// 		print zeros before number 
	