#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}

/*int	main(void)
{
	char    test1 = 'a';
	printf("Le resultat est : %c\n", ft_toupper(test1));
	return (0);
}*/
