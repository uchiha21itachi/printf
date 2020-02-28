/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_libft_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 06:07:10 by yassharm          #+#    #+#             */
/*   Updated: 2020/02/16 06:07:13 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_strlen(const char *s)
{
	int length;

	length = 0;
	if (!s)
		return (0);
	while (s[length])
	{
		length++;
	}
	return (length);
}

char	*ft_strdup(char *s1)
{
	char	*p;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(s1);
	p = (char *)malloc((length + 1) * sizeof(char));
	if (p == 0)
		return (NULL);
	else
	{
		while (i < length)
		{
			p[i] = s1[i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}

int		ft_putstr(char *s, int str_print_len)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (s[i] != '\0' && i < str_print_len)
	{
		count += write(1, &s[i], 1);
		i++;
	}
	return (count);
}
