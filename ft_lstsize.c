#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	t_list	*node1 = ft_lstnew("Bonjour");
	t_list	*node2 = ft_lstnew("Ca va");
	int	resultat;

	node1->next = node2;
	resultat = ft_lstsize(node1);
	printf("%d\n", resultat);
	return (0);
}*/
