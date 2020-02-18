/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yassharm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 00:28:46 by yassharm          #+#    #+#             */
/*   Updated: 2019/11/08 00:28:47 by yassharm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	char	*reverse_string(char *s, int i, int neg)
{
	int		j;
	char	*p;

	j = 0;
	if (neg)
		p = (char *)malloc((i + 2) * sizeof(char));
	else
		p = (char *)malloc((i + 1) * sizeof(char));
	if (p == 0)
		return (NULL);
	else
	{
		if (neg)
			p[j++] = '-';
		while (i > 0)
		{
			p[j] = s[i - 1];
			j++;
			i--;
		}
		p[j] = 0;
	}
	return (p);
}

static	int		check_neg(int num)
{
	int neg;

	neg = 0;
	if (num < 0)
		neg++;
	return (neg);
}

char			*ft_itoa(int num)
{
	int		rem;
	int		neg;
	int		i;
	char	str[11];
	char	*p;

	i = 0;
	if (num == -2147483648)
	{
		p = ft_strdup("-2147483648");
		return (p);
	}
	neg = check_neg(num);
	if (neg)
		num = num * -1;
	while (num > 9)
	{
		rem = num % 10;
		str[i++] = rem + 48;
		num = num / 10;
	}
	str[i++] = num + 48;
	p = reverse_string(str, i, neg);
	free (p);
	return (p);
}
