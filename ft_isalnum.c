/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:07:19 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 11:14:01 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Cette fonction permet de tester si un caractere est alpha-numerique ou non

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	test1 = 'a';
	char	test2 = 'Z';
	char	test3 = '5';
	char	test4 = ' ';
	char	test5 = '!';
	char	test6 = '0';
	char	test7 = 'z';
	char	test8 = 'A';

	printf("Le resultat est %d\n", ft_isalnum(test1));
	printf("Le resultat est %d\n", ft_isalnum(test2));
	printf("Le resultat est %d\n", ft_isalnum(test3));
	printf("Le resultat est %d\n", ft_isalnum(test4));
	printf("Le resultat est %d\n", ft_isalnum(test5));
	printf("Le resultat est %d\n", ft_isalnum(test6));
	printf("Le resultat est %d\n", ft_isalnum(test7));
	printf("Le resultat est %d\n", ft_isalnum(test8));
	return (0);
}*/
