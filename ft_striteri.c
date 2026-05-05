/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:09:47 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/04 11:44:25 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applique la fonction f a chaque caractere de
// s en passant son index en parametre

#include "libft.h"

void	ft_striteri(char *src, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!src || !f)
		return ;
	i = 0;
	while (src[i] != '\0')
	{
		f(i, &src[i]);
		i++;
	}
}

/*void	mon_outil(unsigned int i, char *c)
{
	*c = *c - 32;
	printf("index %u : %c\n", i, *c);
}

int   main(void)
{
	char    str[] = "bonjour";
	printf("Le premier tableau [%s]\n", str);
	ft_striteri(str, mon_outil);
	printf("Le resultat [%s]\n", str);
	return (0);
}*/
