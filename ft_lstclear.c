#include "libft.h"
//#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/*void	delete(void *content)
{
	(void)content;
}

int	main(void)
{
	t_list	*list = NULL;
	t_list	*node1 = ft_lstnew("Bonjour");
	ft_lstadd_back(&list, node1);
	t_list	*node2 = ft_lstnew("Ca va");
	ft_lstadd_back(&list, node2);
	t_list	*node3 = ft_lstnew("Hello");
	ft_lstadd_back(&list, node3);

	ft_lstclear(&list, delete);
	if (list == NULL)
		printf("liste vide\n");
	else
		printf("pas vide\n");
	return (0);
}*/
