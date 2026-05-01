/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:58:41 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 14:06:30 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Supprime et libere tous les noeuds de la liste
//lst : pointeur sur le pointeur de la liste
//del : fonction utilisee pour liberer le contenu de chaque noeud
//NULL : met le pointeur de la liste a NULL apres avoir tout libere
//next : permet de parcourir les noeuds un par un avant de les free

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
