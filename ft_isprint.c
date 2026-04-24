/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:09:16 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/24 13:48:36 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	test1 = 'a';
	char	test2 = 'A';
	char	test3 = 30;
	char	test4 = 128;

	printf("Le resultat est : %d\n", ft_isprint(test1));
	printf("Le resultat est : %d\n", ft_isprint(test2));
	printf("Le resultat est : %d\n", ft_isprint(test3));
	printf("Le resultat est : %d\n", ft_isprint(test4));

	return (0);
}*/
