/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:24:56 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/03 18:25:00 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	check_specifier(char c)
{
	char 	*str;
	
	str = "sciduxXp";
	// printf ("format - %c", c);
	while (*str)
	{
		if (*str == c)
		{
			// printf ("check specifier returns - %c", *str);
			return (0);
		}
		str++;
	}
	// printf ("check specifier returns - 0");
	return (1);
}

void	print_block(f_list block)
{
	printf ("\nPrinting all the values of block\n");
	printf ("width - %d\n", block.width);
	printf ("w.star - %d\n", block.w_star);
	printf ("precision avail? - %d\n", block.p_avail);
	printf ("p.star - %d\n", block.p_star);
	printf ("precision - %d\n", block.precision);
	printf ("zero flag - %d\n", block.zero_flag);
	printf ("minus flag - %d\n", block.minus_flag);
	printf ("block count - %d\n", block.count);
}