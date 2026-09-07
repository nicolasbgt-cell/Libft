#include "libft.h"
//#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && (i + j) < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*res;
	
	res = ft_strnstr("bonjour monde", "monde", 13);
	printf("'monde' dans 'bonjour monde'-> [%s]\n", res);
	
	res = ft_strnstr("bonjour monde", "monde", 7);
	printf("'monde' limite 7 -> [%s]\n", res);

	res = ft_strnstr("bonjour monde", "", 13);
	printf("little vide -> [%s]\n", res);
	
	res = ft_strnstr("bonjour monde", "xyz", 13);
	printf("'xyz' introuvable -> [%s]\n", res ? res : "(null)");
	
	res = ft_strnstr("", "monde", 0);
	printf("big vide -> [%s]\n", res ? res : "(null)");
	
	return (0);
}*/
