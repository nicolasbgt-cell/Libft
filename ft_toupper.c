/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:12:41 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/24 13:50:34 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        c = c - 32;
    }
    return (c);
}

/*int main(void)
{
    char    test1 = 'a';

    printf("Le resultat est : %c\n", ft_toupper(test1));
    return (0);
}*/
