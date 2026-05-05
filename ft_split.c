/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:08:43 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/04 13:12:49 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char c, char sep)
{
	return (c == sep || c == '\0');
}

static int	count_words(char const *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (!is_sep(*s, sep) && is_sep(*(s + 1), sep))
			count++;
		s++;
	}
	return (count);
}

static int	word_len(char const *s, char sep)
{
	int	len;

	len = 0;
	while (!is_sep(s[len], sep))
		len++;
	return (len);
}

static void	free_all(char **res, int i)
{
	while (i >= 0)
	{
		free(res[i]);
		i--;
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (!is_sep(*s, c))
		{
			res[i] = ft_substr(s, 0, word_len(s, c));
			if (!res[i])
				return (free_all(res, i - 1), NULL);
			s += word_len(s, c);
			i++;
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}

/*int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello world foo bar", ' ');
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	result = ft_split(",,hello,,world,,", ',');
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	result = ft_split("", ' ');
	printf("chaine vide : %s\n", result[0] ? result[0] : "NULL");
	free(result);

	return (0);
}*/
