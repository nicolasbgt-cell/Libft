/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:59:09 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 11:13:38 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cree une nouvelle liste en appliquant f à chaque element
//de lst, et utilise del en cas d'echec.

#include "libft.h"
//#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*res;

	new = NULL;
	res = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}

/*void	*word(void *content)
{
	char	*str = (char *)content;
	char	*resultat;
	int	i = 0;

	resultat = malloc(ft_strlen(str) + 1);
	if (!resultat)
		return (NULL);
	while (str[i])
	{
		resultat[i] = ft_toupper(str[i]);
		i++;
	}
	resultat[i] = '\0';
	return (resultat);
}

void	delete(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node1 = ft_lstnew("Bonjour");
	t_list	*node2 = ft_lstnew("ca va");
	t_list	*resultat;

	node1->next = node2;
	resultat = ft_lstmap(node1, word, delete);
	while (resultat)
	{
		printf("[%s]\n", (char *)resultat->content);
		resultat = resultat->next;
	}
	return (0);
}*/
