/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:56:57 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/30 16:44:03 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Ajoute un noeud au début de la liste en le faisant 
//pointer sur l'ancien premier élément

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
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
