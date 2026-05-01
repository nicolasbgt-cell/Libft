/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:58:41 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/30 16:38:09 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Supprime et libère tous les noeuds de la liste.
//lst : pointeur sur le pointeur de la liste
//del : fonction utilisée pour libérer le contenu de chaque nœud
//NULL : met le pointeur de la liste à NULL après avoir tout libéré
//next : permet de parcourir les noeuds un par un avant de les free

#include "libft.h"
//#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	while (lst && *lst)
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
