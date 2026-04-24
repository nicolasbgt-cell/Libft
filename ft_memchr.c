/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:14:55 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/23 12:58:01 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *ptr;
    size_t  i;

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
