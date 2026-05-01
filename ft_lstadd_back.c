/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:58:04 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/30 12:37:36 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Ajoute un nœud à la fin de la liste, ou en premier si elle est vide.
//lst : pointeur sur le pointeur de ta liste 
//(pour pouvoir modifier la liste elle-même)
//new : le nouveau nœud à ajouter à la fin
//NULL : si la liste est vide, new devient le premier élément
//next : le champ qui pointe vers le nœud suivant dans la liste

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
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
