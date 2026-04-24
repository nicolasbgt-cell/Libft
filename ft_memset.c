/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:10:13 by nbigot            #+#    #+#             */
/*   Updated: 2026/04/24 13:51:19 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t		i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	unsigned char	array[] = {1, 2, 3, 4, 5};
	size_t	size = sizeof(int) * 5;
	int	len;

	len = 0;
	while (len < 5)
	{
		printf("Le resultat est : %d\n", array[len]);
		len++;
	}

	printf("\n");

	ft_memset(array, 0, size);

	len = 0;
	while (len < 5)
	{
		printf("Le resultat est : %d\n", array[len]);
		len++;
	}

	return (0);
}*/
