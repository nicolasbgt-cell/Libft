#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return (c);
}

/*int	main(void)
{
	char    test = 'A';
	printf("Le resultat est : %c\n", ft_tolower(test));
	return (0);
}*/
