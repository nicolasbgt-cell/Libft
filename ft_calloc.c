/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:16:45 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 11:14:03 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Cette fonction alloue un bloc de memoire
//en initialisant tous ces octets a la valeur 0

#include "libft.h"
//#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (n != 0 && size > (size_t) - 1 / n)
		return (NULL);
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}

/*int	main(void)
{
	int	array[] = {1, 2, 3};
	int	*resultat;

	printf("Le array[0] est [%d]\n", array[0]);
	printf("Le array[1] est [%d]\n", array[1]);
	printf("Le array[2] est [%d]\n", array[2]);
        resultat = ft_calloc(3, sizeof(int));
	printf("Le resultat[0] est [%d]\n", resultat[0]);
	printf("Le resultat[1] est [%d]\n", resultat[1]);
	printf("Le resultat[2] est [%d]\n", resultat[2]);

        return (0);
}*/	
