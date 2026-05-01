/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:39:03 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/29 17:57:37 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recherche la première occurence d'une valeur typée int
//mais interprétée en tant que char, dans un bloc de mémoire

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    unsigned char   s1[] = {'a', 'b', 'c', 'd', 'e'};
    void    *result;

    result = ft_memchr(s1, 'b', 5);
    printf("Le resultat est %c\n", *(unsigned char*)result);

    return (0);
}*/
