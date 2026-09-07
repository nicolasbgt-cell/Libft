#include "libft.h"

int	ft_atoi(const char *str)
{
	int		neg;
	long	num;
	int		i;

	if (!str)
		return (0);
	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(num * neg));
}

/*int	main(void)
{
	char *test1 = "42";
	char *test2 = "0";
	char *test3 = "-5";
	char *test4 = "+5";
	char *test5 = "   42";
	char *test6 = "42abc";
	char *test7 = "abc";
	char *test8 = "";

	printf("Attendu 42 : %d\n", ft_atoi(test1));
	printf("Attendu 0 : %d\n", ft_atoi(test2));
	printf("Attendu -5 : %d\n", ft_atoi(test3));
	printf("Attendu 5 : %d\n", ft_atoi(test4));
	printf("Attendu 42 : %d\n", ft_atoi(test5));
	printf("Attendu 42 : %d\n", ft_atoi(test6));
	printf("Attendu 0 : %d\n", ft_atoi(test7));
	printf("Attendu 0 : %d\n", ft_atoi(test8));
	return (0);
}*/
