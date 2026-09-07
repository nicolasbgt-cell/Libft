#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	if (!dest && !src)
		return (NULL);
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (dest < src)
	{
		while (size--)
			*ptr1++ = *ptr2++;
	}
	else
	{
		while (size--)
			ptr1[size] = ptr2[size];
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Bonjour";
	char	dest[8];

	ft_memmove(dest, src, 8);
	printf("%s\n", dest);

	return (0);
}*/
