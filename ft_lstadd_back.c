#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

/*int	main(void)
{
	t_list	*list = NULL;
	t_list	*resultat;

	resultat = ft_lstnew("Bonjour");
	ft_lstadd_back(&list, resultat);
	resultat = ft_lstnew("Ca Va");
	ft_lstadd_back(&list, resultat);
	t_list	*tmp = list;
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}*/
