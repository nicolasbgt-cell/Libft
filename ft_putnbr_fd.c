/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:11:42 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/23 11:31:49 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void printnb(long nb, int fd)
{
    if (nb / 10)
    {
        printnb(nb / 10, fd);
        printnb(nb % 10, fd);
    }
    else
        ft_putchar_fd(nb + '0', fd);
}

void    ft_putnbr_fd(int n, int fd)
{
    long    nb;
    nb = n;
    if (nb < 0)
    {
        write(fd, "-", 1);
        nb = -nb;
    }
    printnb(nb, fd);
}

/*int	main(void)
{
    ft_putnbr_fd(2147483648, 1);

    return (0);
}*/
