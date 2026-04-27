/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:44:25 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/27 12:32:35 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    while (*s)
    {
	    if (*s == (char)c)
		    return ((char *)s);
	    s++;
    }
    if ((char)c == '\0')
	    return ((char *)s);
    return (NULL);
}

/*int	main(void)
{
	char	str[] = "Bonjour";
	char	*result = ft_strchr(str, 'j');

	printf("Le premier tableau[%s]\n", str);
	printf("Apres [%c]\n", *result);
	
	return (0);
}*/
