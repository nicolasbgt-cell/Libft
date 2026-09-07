#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	*list = NULL;
	t_list	*resultat;

	resultat = ft_lstnew("Bonjour");
	ft_lstadd_front(&list, resultat);
	resultat = ft_lstnew("Ca va");
	ft_lstadd_front(&list, resultat);
	resultat = ft_lstnew("Hello");
	ft_lstadd_front(&list, resultat);
	t_list	*tmp = list;
	while (tmp != NULL)
	{
		printf("[%s]\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}*/
