/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:10:58 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/24 13:49:29 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
    unsigned char *ptr1;
    unsigned char *ptr2;
    size_t  i;

    if (dest == NULL || src == NULL)
            return NULL;
    
    ptr1 = (unsigned char *)dest;
    ptr2 = (unsigned char *)src;

    i = 0;
    while (i < count)
    {
        ptr1[i] = ptr2[i];
        i++;
    }
    return (dest);
}

/*int main(void)
{
    char   str1[] = "Coucou";
    char   str2[] = "C";

    printf("Le premier tableau contient [%s]\n", str1);
    printf("Le deuxieme tableau contient [%s]\n", str2);

    ft_memcpy(str1, str2, strlen(str2 + 1));
    printf("Le resultat est [%s]\n", str1);

    return (0);
}*/
