#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Bonjour";
	char	*result = ft_strchr(str, 'j');

	printf("Le premier tableau[%s]\n", str);
	printf("Apres [%c]\n", *result);
	
	return (0);
}*/
