/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:09:47 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/27 13:38:28 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *src, void (*f)(unsigned int, char *))
{
    unsigned int    i;

    i = 0;
    while (src[i] != '\0')
    {
        f(i, &src[i]);
        i++;
    }
}

void	mon_outil(unsigned int i, char *c)
{
	*c = *c - 32;
	printf("index %u : %c\n", i, *c);
}

/*t main(void)
{
    char    str[] = "bonjour";
    
    printf("Le premier tableau [%s]\n", str);

    ft_striteri(str, mon_outil);

    printf("Le resultat [%s]\n", str);

    return (0);
}*/
