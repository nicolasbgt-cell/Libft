/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:57:36 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/30 14:30:24 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		else
			lst = lst->next;
	}
	return (lst);
}

/*int	main(void)
{
	t_list	*list = NULL;
	t_list	*resultat;
	t_list	*node1 = ft_lstnew("Bonjour");
	ft_lstadd_back(&list, node1);
	t_list	*node2 = ft_lstnew("Ca va");
	ft_lstadd_back(&list, node2);
	t_list	*node3 = ft_lstnew("Hello");
	ft_lstadd_back(&list, node3);

	resultat = ft_lstlast(list);

	printf("[%s]\n", (char *)resultat->content);

	return (0);
}*/
