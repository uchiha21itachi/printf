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
	printf ("%p\n", str);
	free (str - i);
	return (1);
}

void	ft_printf(char *format, ...)
{

	va_list			arg_list;
	char			*p;
	static	char		*str;
	char			*temp;
	int				i;


	if (!str)
	{
		str = ft_strdup("test");
	}
	va_start(arg_list, format);
	p = format;
	while (*p)
	{

		while (*p != '%' && *p)
			ft_putchar(*p++);
		if (*p++ == '%')
		{
			while ((i = check_converter(*p) == 1))
			{
				temp = str;
				str = ft_strjoin(temp, *p++);
				printf ("%s\n", str);
				free (temp);
				temp = NULL;
			}
			free (str);
			str = NULL;
		}
		p++;
	}
	va_end(arg_list);
	// free (str);
}