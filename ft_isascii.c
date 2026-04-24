/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:08:44 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/24 13:48:19 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	test1 = 'a';
	char	test2 = 'A';
	char	test3 = ' ';
	char	test4 = 128;

	printf("Le resultat est : %d\n", ft_isascii(test1));
	printf("Le resultat est : %d\n", ft_isascii(test2));
	printf("Le resultat est : %d\n", ft_isascii(test3));
	printf("Le resultat est : %d\n", ft_isascii(test4));

	return (0);
}*/
