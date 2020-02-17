






/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:22:59 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/16 06:07:31 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int		cal_output_len(f_list block, int len, int output_len)
// {
// 	if (block.precision > block.width)
// 	{
// 		if (block.precision > len && block.width <= len)
// 			output_len = len;
// 		else if (block.precision > len && block.width > len)
// 			output_len = block.width;
// 		else if (block.precision <= len && block.width < len)
// 			output_len = block.precision;	
// 	}
// 	else if (block.width > block.precision) 
// 			output_len = block.width;
// 	else if (block.width == block.precision)
// 	{
// 		if (block.precision > len)
// 			output_len = block.width;
// 		else if (block.precision < len)
// 			output_len = block.precision;
// 		else if (block.precision == len)
// 			output_len = len;
// 	}
// 	return (output_len);
// }

int		cal_str_output_len(f_list block, int len)
{
	int str_print_len;

	str_print_len = 0;
	if (block.precision >= len && block.precision != 0)
		str_print_len = len;
	else if (block.precision < len && block.precision != 0)
		str_print_len = block.precision;
	else if (block.width && block.precision == 0)
		str_print_len = len;
	return (str_print_len);
}

int		cal_spaces(int len, f_list block)
{
	int spaces;
	int str_print_len;

	str_print_len = cal_str_output_len(block, len);
	spaces = 0;
	if (block.width <= str_print_len)
		spaces = 0;
	else if (block.width > str_print_len)
	{
		if (block.width <= block.precision)
			spaces = block.width - str_print_len;
		else if (block.width > block.precision)
		{
			if (block.precision >= len)
				spaces = block.width - len;
			else if (block.precision < len)
				spaces = block.width - block.precision;
		}
	}
	return (spaces);
}

int		cal_spaces_only_one(f_list block, int len)
{
	int spaces;
	int	str_output_len;

	spaces = 0;
	str_output_len = cal_str_output_len(block, len);
	if (block.width)
	{
		if (block.width > str_output_len)
			spaces = block.width - str_output_len; 
	}
	return (spaces);
}

char	*create_null_str(void)
{
	char *s;

	s = (char *)malloc(7 * sizeof (char));
	s[0] = '(';
	s[1] = 'n';
	s[2] = 'u';
	s[3] = 'l';
	s[4] = 'l';
	s[5] = ')';
	s[6] = '\0';
	return (s);
}

f_list		print_string(char *str, int len,  int spaces, f_list block)
{
	int		str_print_len;
	int		counter;

	counter = 0;
	str_print_len = cal_str_output_len(block, len);
	if (block.minus_flag)
	{
		block.count += ft_putstr(str, str_print_len);
		while (counter++ < spaces)
			block.count += write(1, " ", 1);
	}
	else
	{
		while (counter++ < spaces)
			block.count += write(1, " ", 1);
		block.count += ft_putstr(str, str_print_len);	
	}
	return (block);
}


f_list		parse_s(f_list block, va_list arg_list)
{
	char	*str;
	int		len;
	// int		spaces;
	// int		output_len;

	// output_len = 0;

	// if ((str = ft_strdup(va_arg(arg_list, char *))) == 0)
		//write(1, "Error in allocating memory from malloc\n", 39);
	str = create_str()
	str = va_arg(arg_list, char *);
	if (str == NULL)
		str = create_null_str();
	else
		str = ft_strdup(str);
	len = ft_strlen(str);
	block.count += ft_putstr(str, len);
	free (str);
	return (block);
}

/*
	if (block.p_avail == 1 && block.precision == 0)
	{
		block.count += write(1, "", 0);
		return (block);
	}
	if (*str == '\0')
	{
		block.count += write(1, "(null)", 6);
		return (block);
	}
	if (block.width && block.precision)
	{
		spaces = cal_spaces(len, block);
		block = print_string(str, len, spaces, block);
	}
	else if ((block.width && block.precision == 0) || (block.precision && block.width == 0))
	{
		spaces = cal_spaces_only_one(block, len);
		block = print_string(str, len, spaces, block);
	}
*/