#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	test1 = 'a';
	char	test2 = 'A';
	char	test3 = ' ';
	char	test4 = 128;

	printf("Le resultat est : %d\n", ft_isascii(test1));
	printf("Le resultat est : %d\n", ft_isascii(test2));
	printf("Le resultat est : %d\n", ft_isascii(test3));
	printf("Le resultat est : %d\n", ft_isascii(test4));

	return (0);
}*/
