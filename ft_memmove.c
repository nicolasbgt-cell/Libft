/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:11:21 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 11:13:17 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Cette fonction permet de copier un bloc de memoire specifie
//par le parametre source dans un nouvel emplacement
//designe par le parametre destination

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	if (!dest && !src)
		return (NULL);
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (dest < src)
	{
		while (size--)
			*ptr1++ = *ptr2++;
	}
	else
	{
		while (size--)
			ptr1[size] = ptr2[size];
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Bonjour";
	char	dest[8];

	ft_memmove(dest, src, 8);
	printf("%s\n", dest);

	return (0);
}*/
