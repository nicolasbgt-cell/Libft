/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:12:59 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/23 12:07:54 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
    if (c >= 65 && c <= 90 )
    {
        c = c + 32;
    }
    return (c);
}

/*int main(void)
{
    char    test = 'A';

    printf("Le resultat est : %c\n", ft_tolower(test));
    return (0);
}*/
