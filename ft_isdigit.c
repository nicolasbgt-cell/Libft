/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:05:26 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/24 13:48:27 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*1int	main(void)
{
	char	test1 = 'a';
	char	test2 = 'A';
	char	test3 = '0';
	char	test4 = 128;

	printf("Le resultat est : %d\n", ft_isdigit(test1));
	printf("Le resultat est : %d\n", ft_isdigit(test2));
	printf("Le resultat est : %d\n", ft_isdigit(test3));
	printf("Le resultat est : %d\n", ft_isdigit(test4));

	return (0);
}*/
