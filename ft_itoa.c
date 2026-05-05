/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbigot <nbigot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:09:06 by nbigot            #+#    #+#             */
/*   Updated: 2026/05/05 14:37:35 by nbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convertit un entier en chaine de caracteres allouee dynamiquement
// et la retourne

#include "libft.h"
//#include <stdlib.h>

int	ft_numlen(long n)
{
	int	count;

	count = 0;
	if (n == 0)
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = (long)n;
	if (nb < 0)
		nb = -nb;
	len = ft_numlen((long)n);
	if (n < 0)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (nb > 0)
	{
		len--;
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
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
