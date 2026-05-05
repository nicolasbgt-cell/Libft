/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:39:03 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/05 11:44:52 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recherche la premiere occurence d'une valeur typee int
//mais interpretee en tant que char, dans un bloc de memoire

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	if (!s)
		return (NULL);
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
