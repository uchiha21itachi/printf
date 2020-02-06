#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t length;

	length = 0;
	while (s[length])
	{
		length++;
	}
	return (length);
}

char	*ft_strjoin(char const *s1, char s2)
{
	size_t	size;
	size_t	i;
	char	*p;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1);
	p = (char *)malloc((size+ 2) * sizeof(char));
	if (p == 0)
		return (NULL);
	else
	{
		while (i < size)
		{
			p[i] = *s1;
			i++;
			s1++;
		}
		p[i++] = s2;
		p[i] = '\0';
	}
	return (p);

}


char	*ft_strdup(char *s1)
{
	char	*p;
	size_t	length;
	size_t	i;

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
