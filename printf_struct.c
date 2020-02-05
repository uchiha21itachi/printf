#include "ft_printf.h"
#include <stdlib.h>
#include "../libft/yassharm4/libft.h"

typedef struct	f_list
{
	int					i;
	char				*c;
}					f_list;


char	*ft_strdup(const char *s1)
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

int main()
{
	f_list	*p;
	int		l;
	char	*s;
	int		k;

	k = 10;
	s = (char *)malloc(k + 1 * sizeof(char));
	s = ft_strdup("Hell yeah");
	s[k] = '\0';
	p = (f_list *)malloc(sizeof (f_list));
	l = 10;
	p->i = l;
	printf("%d\n",p->i);
	p->c = "Hell";
	printf ("%s", p->c);
	free(p);
	if (*s)
		free(s);
	while (1);
}