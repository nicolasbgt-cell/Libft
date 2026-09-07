#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;
	size_t				i;

	if (!s1 || !s2)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int array1 [] = {54, 84, 57, 89, 25};
	int array2 [] = {54, 84, 55, 89, 25};
	size_t size = sizeof(int) * 5;
	int result;
	result = ft_memcmp(array1, array2, size);
	printf("Le resultat est : %d\n", result);
	
	return (0);
}*/
