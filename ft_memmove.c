/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:11:21 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/24 13:44:17 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
    unsigned char *ptr1;
    unsigned char *ptr2;
    size_t  i;

    if (dest == NULL || src == NULL)
        return (NULL);

    ptr1 = (unsigned char *)dest;
    ptr2 = (unsigned char *)src;

    if (dest < src)
    {
        i = 0;
        while (i < size)
        {
            ptr1[i] = ptr2[i];
            i++;
        }
    }
    
    if (dest > src)
    {
        i = size;
        while (i > 0)
        {
            ptr1[i - 1] = ptr2[i - 1];
            i--;
        }
    }
    return (dest);
}
