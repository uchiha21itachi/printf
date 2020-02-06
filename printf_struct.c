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





int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

void	process_struct(f_list x)
{
	printf ("%d", x.dash_flag);
}

void	ft_parser(char *p)
{
	struct f_list 	x;

	while(*p)
	{
		if (*p == '%')
		{
			while (*p != 's' && *p != 'd' && *p != 'i' && *p != 'c')
			{
				if (*p == '-')
					x.dash_flag = 1;
				else if (*p == '0')
					x.zero_flag = 1;
				p++;
			}
			process_struct(x);
		}
		p++;
	}
}


void	ft_printf(char *format, ...)
{
	
	va_list	list;
	char	*p;
	char	*val_str;
	int		i;

	va_start (list, format);
	p = format;

	ft_parser(p);
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

	ft_printf ("%-10.20s", str);

}


// if (*p != '%')
// 		{
// 			// printf ("------!%%----\n");
// 			ft_putchar(*p);
// 			// printf ("\n");
// 			p++;
// 		}
// 		else
// 		{
// 			p++;
// 			// printf ("p");
// 			if (*p == 'i')
// 			{
// 				ival = va_arg(list, int);
// 				printf ("%d\n", ival); 
// 				p++;
// 			}
// 			else if (*p == 's')
// 			{
// 				val_str = va_arg (list, char*);
// 				ft_putstr (val_str);
// 				p++;
// 			}
// 		}