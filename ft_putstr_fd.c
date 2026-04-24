/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:10:53 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/23 11:37:43 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    size_t i;
    
    i = 0;
    while(s[i] != '\0')
    {
       write(fd, &s[i], 1);
       i++; 
    }
}

/*int main(void)
{
    ft_putstr_fd("Hasta la vista Baby", 1);
    return (0);
}*/