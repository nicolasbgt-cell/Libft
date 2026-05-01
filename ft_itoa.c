/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:09:06 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/01 11:13:46 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convertit un entier en chaine de caracteres allouee dynamiquement
// et la retourne

#include "libft.h"
//#include <stdlib.h>

int	ft_numlen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

void	ft_str(char *str, int n, int len)
{
	int	i;

	i = len - 1;
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	while (n != 0)
	{
		if (n < 0)
			str[i] = -(n % 10) + '0';
		else
			str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[len] = '\0';
	ft_str(str, n, len);
	return (str);
}

/*int	main(void)
{	
	char	*s;
	
	s = ft_itoa(0);
	printf("0 -> [%s]\n", s);
	free(s);
	
	s = ft_itoa(42);
	printf("42 -> [%s]\n", s);
	free(s);

	s = ft_itoa(-42);
	printf("-42 -> [%s]\n", s);
	free(s);
	
	s = ft_itoa(2147483647);
	printf("INT_MAX  -> [%s]\n", s);
	free(s);
	
	s = ft_itoa(-2147483648);
	printf("INT_MIN  -> [%s]\n", s);
	free(s);
	
	return (0);
}*/
