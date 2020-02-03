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

void	ft_putnbr(int n)
{
	int		neg;
	char	c;

	c = 45;
	neg = 0;
	if (n == -2147483648)
	{
		ft_putchar(c);
		ft_putchar(50);
		n = 147483648;
	}
	if (n < 0 && n != -2147483648)
	{
		ft_putchar(c);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void 	ft_putstr (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

