#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*int   main(void)
{
	char    str[] = "Bonjour";
	char    buffer[20];

	printf("Premier tableau [%s]\n", str);
	ft_strlcpy(buffer, str, 20);
	printf("Le resultat [%s]\n", buffer);
	return (0);
}*/
