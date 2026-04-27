/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:07:04 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/27 17:22:08 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


char    *ft_strjoin(char const *s1, char const *s2)
{
    int result;
    char    *str;

    result = (ft_strlen(s1) + (ft_strlen(s2) + 1));
    str = malloc(result);
    if (!str)
        return (NULL);
    ft_strlcpy(str, s1, result);
    ft_strlcat(str, s2, result);
    return (str);
}

int main(void)
{
    char    str[] = "Bonjour";
    char    str1[] = " ca va";
    char    *result;

    result = ft_strjoin(str, str1);
    printf("Le resultat est [%s]\n", result);
    free(result);

    return (0);
}
