/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:06:45 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 13:36:27 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdlib.h>
//#include <unistd.h>

static size_t	calculer_len(char const *s, unsigned int start, size_t len)
{
	size_t	slen;

	slen = ft_strlen(s);
	if (start >= slen)
		return (0);
	if (len > slen - start)
		return (slen - start);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	len = calculer_len(s, start, len);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*int	main(void)
{
	char *res = ft_substr("bonjour", 3, 4);
	write(1, res, ft_strlen(res));
	write(1, "\n", 1);
	free(res);
}*/
