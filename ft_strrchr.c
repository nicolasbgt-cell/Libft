/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:13:23 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 13:35:42 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "bonjour";
	
	write(1, ft_strrchr(str, 'o'), 1);
	write(1, "\n", 1);
	write(1, ft_strrchr(str, 'z') ? "trouve" :
       	"NULL", ft_strrchr(str, 'z') ? 6 : 4);
	write(1, "\n", 1);

	return (0);
}*/
