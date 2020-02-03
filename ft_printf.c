/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 18:25:23 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/03 18:25:24 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	ft_printf(char *format, ...)
{
	va_list	list;
	char	*p;
	int		ival;
	char	*val_str;

	va_start (list, format);
	p = format;
	while (*p)
	{
		if (*p != '%')
		{
			// printf ("------!%%----\n");
			ft_putchar(*p);
			// printf ("\n");
			p++;
		}
		else
		{
			p++;
			// printf ("p");
			if (*p == 'i')
			{
				ival = va_arg(list, int);
				printf ("%d\n", ival); 
				p++;
			}
			else if (*p == 's')
			{
				val_str = va_arg (list, char*);
				ft_putstr (val_str);
				p++;
			}
		}
	}
	va_end(list);
}

void 	test_fun(char c)
{
	printf ("char is - %c", c);
}

int main()
{
	char *str;
	char p[30] = "Hello    ";
	char *str2;
	char p2[40] = "World";
	int k = 88;

	str =  p;
	str2 = p2;
	// ft_printf("%i", k);
	test_fun(k);
	// ft_printf ("%s heelo\n %s %i %s", str, str2, k, str);

}
