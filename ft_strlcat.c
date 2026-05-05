/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:12:08 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/04 11:42:06 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Concatene src à dest en limitant a size octets 
// et retourne la longueur totale visee

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	dest_len;

	if (!dest || !src)
		return (0);
	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (size <= i)
	{
		return (size + j);
	}
	dest_len = i;
	k = 0;
	while (src[k] != '\0' && i < (size - 1))
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (dest_len + j);
}

/*int   main(void)
{
    char    str[30] = "Hasta la vista";
    char    str1[] = " baby";


    printf("Premier tableau [%s]\n", str);
    printf("Deuxieme tableau [%s]\n", str1);

    ft_strlcat(str, str1, 30);

    printf("Concatener [%s]\n", str);
    return (0);
}*/
