/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:58:21 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 11:14:49 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Supprime et libere un seul noeud en appelant del 
//sur son contenu puis free sur le noeud

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
