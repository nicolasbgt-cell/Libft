/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:44:25 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 11:13:22 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Retourne un pointeur vers la premiere occurrence de c dans la chaine s

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
