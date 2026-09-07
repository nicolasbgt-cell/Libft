#include "libft.h"
//#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*void	delete(void *content)
{
	(void)content;
}

int	main(void)
{
	t_list	*node1 = ft_lstnew("Bonjour");

	ft_lstdelone(node1, delete);
	node1 = NULL;
	if (node1 == NULL)
		printf("liste vide\n");
	else
		printf("pas vide\n");
	return (0);
}*/
