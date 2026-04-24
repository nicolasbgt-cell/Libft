/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:05:01 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/24 13:48:12 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	test1 = 'a';
	char	test2 = 'A';
	char	test3 = '0';
	char	test4 = ' ';

	printf("Le resultat est %d\n", ft_isalpha(test1));
	printf("Le resultat est %d\n", ft_isalpha(test2));
	printf("Le resultat est %d\n", ft_isalpha(test3));
	printf("Le resultat est %d\n", ft_isalpha(test4));

	return (0);
}*/
