/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:10:36 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/24 13:47:49 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr++ = 0;
		n--;
	}
}

/*int	main(void)
{
	char	array[5] = {3, 2, 6, 4, 5};
	int	i = 0;

	while (i < 5)
	{
		printf("Le tableau est : %d\n", array[i]);
		i++;
	}
	ft_bzero(array, i);
	i = 0;
	while (i < 5)
	{
		printf("Le tableau change : %d\n", array[i]);
		i++;
	}
	return (0);
}*/
