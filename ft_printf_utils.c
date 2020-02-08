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

int		check_converter(char p)
{
	char	*str;
	int		i;
	
	i = 0;
	str = ft_strdup("scdiupxX");
	while (*str)
	{
		if (p == *str)
			return (0);
		str++;
		i++;
	}
	// printf ("%p\n", str);
	free (str - i);
	return (1);
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

