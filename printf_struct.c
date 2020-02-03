#include "ft_printf.h"
#include <stdlib.h>

typedef struct	f_list
{
	char				c;
	struct f_list	*next;
}					f_list;


f_list	*ft_lstnew(char ch)
{
	f_list	*new;

	new = (f_list *)malloc(sizeof(f_list));
	if (new == 0)
		return (NULL);
	new->c = ch;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(f_list **alst, char c)
{
	f_list *ls;

	if (!alst)
		return ;
	if (*alst)
		ls = *alst;
	else
	{
		*alst = ft_lstnew(c);
		return ;
	}
	while (ls->next != NULL)
		ls = ls->next;
	ls->c = c;
	ls->next = NULL;
}

int main()
{
	char c;
	f_list	*alst;
	f_list	*new;

	
	new = ft_lstadd_back(&alst, 'i');
	
}