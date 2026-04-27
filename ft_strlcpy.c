/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:11:42 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/27 17:23:28 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (src[i] != '\0' && i < (size - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}

/*int   main(void)
{
    char    str[] = "Bonjour";
    char    buffer[20];

    printf("Premier tableau [%s]\n", str);
    ft_strlcpy(buffer, str, 20);
    printf("Le resultat [%s]\n", buffer);

    return (0);
}*/