#include "libft.h"
//#include <stdlib.h>

char	*ft_strmapi(const char *src, char (*f)(unsigned int, char))
{
	size_t	len;
	int		i;
	char	*map;

	i = 0;
	if (!src || !f)
		return (NULL);
	len = ft_strlen(src);
	map = malloc(sizeof(char) * (len + 1));
	if (map == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		map[i] = (*f)(i, src[i]);
		i++;
	}
	map[len] = '\0';
	return (map);
}

/*char	my_func(unsigned int i, char str)
{
	printf("Index [%d] et [%c]\n", i, str);
	return str - 32;
}   

int	main(void)
{
	char	str[] = "bonjour";
	printf("Le premier tableau [%s]\n", str);
	char	*result;
	result = ft_strmapi(str, my_func);
	printf("Le resultat est [%s]\n", result);
	return (0);
}*/
