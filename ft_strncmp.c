/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:14:30 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/28 14:17:03 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 1)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]) && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char	str[] = "Bonjour";
	char	str1[] = "ca va";
	int	result;
	printf("Test 1 [%s]\n", str);
	printf("Test 2 [%s]\n", str1);
	result = ft_strncmp(str, str1, 5);
	printf("Longeur des chaine [%d]\n", result);
	return (0);
}*/
