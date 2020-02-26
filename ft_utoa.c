#include "ft_printf.h"

static	char	*reverse_string(char *s, long i, long neg)
{
	long		j;
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

static	long		check_neg(long num)
{
	long neg;

	neg = 0;
	if (num < 0)
		neg++;
	return (neg);
}

char			*ft_utoa(long num)
{
	long		rem;
	long		neg;
	long		i;
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
	// free (p);
	return (p);
}
