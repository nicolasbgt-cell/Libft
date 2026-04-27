/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:17:00 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/27 11:25:35 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *src)
{
    int i;
    int len;
    char    *dup;

    i = 0;
    dup = 0;
    len = ft_strlen(src);
    dup = malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
        return (NULL);
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

/*int main(void)
{
    int i;
    char    *s;
    char    *dup;

    i = 0;
    s = "Bonjour";
    dup = ft_strdup(s);
    while (dup[i])
    {
        printf("[%c]\n", dup[i]);
        i++;
    }
    free(dup);
    dup = 0;
    return (0);
}*/
