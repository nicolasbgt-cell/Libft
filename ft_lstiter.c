/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:59:29 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 11:13:44 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applique la fonction f a chaque element de la liste chainee lst

#include "libft.h"
//#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*node1 = ft_lstnew("Bonjour");
	t_list	*node2 = ft_lstnew("Hello");

	node1->next = node2;
	ft_lstiter(node1, print_content);

	return (0);
}*/
