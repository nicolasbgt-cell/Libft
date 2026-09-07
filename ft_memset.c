#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	unsigned char		*ptr;
	size_t				i;

	if (!b)
		return (NULL);
	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	unsigned char	array[] = {1, 2, 3, 4, 5};
	size_t	size = sizeof(int) * 5;
	int	len;

	len = 0;
	while (len < 5)
	{
		printf("Le resultat est : %d\n", array[len]);
		len++;
	}

	printf("\n");

	ft_memset(array, 0, size);

	len = 0;
	while (len < 5)
	{
		printf("Le resultat est : %d\n", array[len]);
		len++;
	}

	return (0);
}*/
