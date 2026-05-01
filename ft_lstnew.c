/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:56:26 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 11:13:36 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cree et retourne un nouvel element de liste avec content comme valeur

#include "libft.h"
//#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = (t_list *)malloc(sizeof(*elt));
	if (elt == NULL)
		return (NULL);
	elt->content = content;
	elt->next = NULL;
	return (elt);
}

/*int	main(void)
{
	t_list	*node1 = ft_lstnew("Bonjour");
        printf("%s\n", (char *)node1->content);
        return (0);
}*/
