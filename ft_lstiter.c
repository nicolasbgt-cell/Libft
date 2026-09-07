#include "libft.h"
//#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*node1 = ft_lstnew("Bonjour");
	t_list	*node2 = ft_lstnew("Hello");

	node1->next = node2;
	ft_lstiter(node1, print_content);

	return (0);
}*/
