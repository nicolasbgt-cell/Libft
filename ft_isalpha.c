#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	test1 = 'a';
	char	test2 = 'A';
	char	test3 = '0';
	char	test4 = ' ';

	printf("Le resultat est %d\n", ft_isalpha(test1));
	printf("Le resultat est %d\n", ft_isalpha(test2));
	printf("Le resultat est %d\n", ft_isalpha(test3));
	printf("Le resultat est %d\n", ft_isalpha(test4));

	return (0);
}*/
