#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return ;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr++ = 0;
		n--;
	}
}

/*int	main(void)
{
	char	array[5] = {3, 2, 6, 4, 5};
	int	i = 0;

	while (i < 5)
	{
		printf("Le tableau est : %d\n", array[i]);
		i++;
	}
	ft_bzero(array, i);
	i = 0;
	while (i < 5)
	{
		printf("Le tableau change : %d\n", array[i]);
		i++;
	}
	return (0);
}*/
