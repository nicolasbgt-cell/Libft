/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:14:50 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/24 13:48:59 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr1;
    unsigned char *ptr2;
    size_t  i;
    
    ptr1 = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;

    i = 0;
    while (i < n)
    {
        if (ptr1[i] != ptr2[i])
        {
            return (ptr1[i] - ptr2[i]);
        }
        i++;
    }
    return (0);
}

/*int main(void)
{
    int array1 [] = {54, 84, 57, 89, 25};
    int array2 [] = {54, 84, 55, 89, 25};
    size_t size = sizeof(int) * 5;
    int result;

    result = ft_memcmp(array1, array2, size);
    printf("Le resultat est : %d\n", result);

    return (0);
}*/
