#include "libft.h"
//#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*dup;

	if (!src)
		return (NULL);
	i = 0;
	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int	main(void)
{
	int	i;
	char	*s;
	char	*dup;

	i = 0;
	s = "Bonjour";
	dup = ft_strdup(s);
	while (dup[i])
	{
		printf("[%c]\n", dup[i]);
		i++;
	}
	free(dup);
	dup = 0;
	return (0);
}*/
