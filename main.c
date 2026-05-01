#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Fonctions helper pour les tests lst */
void	print_lst(t_list *lst)
{
	while (lst)
	{
		printf("[%s] -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

void	del(void *content)
{
	free(content);
}

void	*to_upper(void *content)
{
	char	*str = (char *)content;
	char	*res;
	int		i = 0;

	res = malloc(ft_strlen(str) + 1);
	if (!res)
		return (NULL);
	while (str[i])
	{
		res[i] = ft_toupper(str[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	mapi_upper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

void	iteri_upper(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

void	print_content(void *content)
{
	ft_putstr_fd((char *)content, 1);
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	printf("=== ft_strlen ===\n");
	printf("%zu\n", ft_strlen("Bonjour"));		/* attendu: 7 */
	printf("%zu\n", ft_strlen(""));			/* attendu: 0 */

	printf("\n=== ft_isalpha ===\n");
	printf("%d\n", ft_isalpha('a'));			/* attendu: != 0 */
	printf("%d\n", ft_isalpha('1'));			/* attendu: 0 */

	printf("\n=== ft_isdigit ===\n");
	printf("%d\n", ft_isdigit('9'));			/* attendu: != 0 */
	printf("%d\n", ft_isdigit('a'));			/* attendu: 0 */

	printf("\n=== ft_isalnum ===\n");
	printf("%d\n", ft_isalnum('a'));			/* attendu: != 0 */
	printf("%d\n", ft_isalnum('!'));			/* attendu: 0 */

	printf("\n=== ft_isascii ===\n");
	printf("%d\n", ft_isascii(65));				/* attendu: != 0 */
	printf("%d\n", ft_isascii(200));			/* attendu: 0 */

	printf("\n=== ft_isprint ===\n");
	printf("%d\n", ft_isprint('a'));			/* attendu: != 0 */
	printf("%d\n", ft_isprint(1));				/* attendu: 0 */

	printf("\n=== ft_toupper ===\n");
	printf("%c\n", ft_toupper('a'));			/* attendu: A */
	printf("%c\n", ft_toupper('A'));			/* attendu: A */

	printf("\n=== ft_tolower ===\n");
	printf("%c\n", ft_tolower('A'));			/* attendu: a */
	printf("%c\n", ft_tolower('a'));			/* attendu: a */

	printf("\n=== ft_strchr ===\n");
	printf("%s\n", ft_strchr("Bonjour", 'j'));	/* attendu: jour */
	printf("%p\n", ft_strchr("Bonjour", 'z'));	/* attendu: (nil) */

	printf("\n=== ft_strncmp ===\n");
	printf("%d\n", ft_strncmp("abc", "abc", 3));	/* attendu: 0 */
	printf("%d\n", ft_strncmp("abc", "abd", 3));	/* attendu: != 0 */

	printf("\n=== ft_memset ===\n");
	char buf[6] = "hello";
	ft_memset(buf, 'a', 3);
	printf("%s\n", buf);					/* attendu: aaalo */

	printf("\n=== ft_bzero ===\n");
	char buf2[4] = "hi!";
	ft_bzero(buf2, 2);
	printf("%c\n", buf2[0]);				/* attendu: rien (0) */

	printf("\n=== ft_memcpy ===\n");
	char dst[10] = {0};
	ft_memcpy(dst, "Bonjour", 7);
	dst[7] = '\0';
	printf("%s\n", dst);					/* attendu: Bonjour */

	printf("\n=== ft_memmove ===\n");
	char mv[10] = "Bonjour";
	ft_memmove(mv + 2, mv, 5);
	printf("%s\n", mv + 2);				/* attendu: Bonjo */

	printf("\n=== ft_memchr ===\n");
	printf("%p\n", ft_memchr("Bonjour", 'j', 7));	/* attendu: adresse != NULL */

	printf("\n=== ft_memcmp ===\n");
	printf("%d\n", ft_memcmp("abc", "abc", 3));		/* attendu: 0 */
	printf("%d\n", ft_memcmp("abc", "abd", 3));		/* attendu: != 0 */

	printf("\n=== ft_strlcpy ===\n");
	char strlcpy_dst[10];
	printf("%zu\n", ft_strlcpy(strlcpy_dst, "Bonjour", 10));	/* attendu: 7 */
	printf("%s\n", strlcpy_dst);				/* attendu: Bonjour */

	printf("\n=== ft_strlcat ===\n");
	char strlcat_dst[20] = "Bon";
	printf("%zu\n", ft_strlcat(strlcat_dst, "jour", 20));		/* attendu: 7 */
	printf("%s\n", strlcat_dst);				/* attendu: Bonjour */

	printf("\n=== ft_atoi ===\n");
	printf("%d\n", ft_atoi("42"));				/* attendu: 42 */
	printf("%d\n", ft_atoi("-42"));				/* attendu: -42 */
	printf("%d\n", ft_atoi("  +10"));			/* attendu: 10 */

	printf("\n=== ft_calloc ===\n");
	int *arr = ft_calloc(5, sizeof(int));
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);	/* attendu: 0 0 0 */
	free(arr);

	printf("\n=== ft_strdup ===\n");
	char *dup = ft_strdup("Bonjour");
	printf("%s\n", dup);					/* attendu: Bonjour */
	free(dup);

	printf("\n=== ft_strjoin ===\n");
	char *join = ft_strjoin("Bon", "jour");
	printf("%s\n", join);					/* attendu: Bonjour */
	free(join);

	printf("\n=== ft_strmapi ===\n");
	char *mapi = ft_strmapi("bonjour", mapi_upper);
	printf("%s\n", mapi);					/* attendu: BONJOUR */
	free(mapi);

	printf("\n=== ft_striteri ===\n");
	char iteri_str[] = "bonjour";
	ft_striteri(iteri_str, iteri_upper);
	printf("%s\n", iteri_str);				/* attendu: BONJOUR */

	printf("\n=== ft_putchar_fd ===\n");
	ft_putchar_fd('A', 1);					/* attendu: A */
	printf("\n");

	printf("\n=== ft_putstr_fd ===\n");
	ft_putstr_fd("Bonjour", 1);				/* attendu: Bonjour */
	printf("\n");

	printf("\n=== ft_putendl_fd ===\n");
	ft_putendl_fd("Bonjour", 1);				/* attendu: Bonjour\n */

	printf("\n=== ft_putnbr_fd ===\n");
	ft_putnbr_fd(42, 1);					/* attendu: 42 */
	printf("\n");

	printf("\n=== ft_lstnew ===\n");
	t_list *n1 = ft_lstnew("Bonjour");
	printf("%s\n", (char *)n1->content);			/* attendu: Bonjour */

	printf("\n=== ft_lstadd_front ===\n");
	t_list *lst = ft_lstnew("Hello");
	ft_lstadd_front(&lst, ft_lstnew("Salut"));
	print_lst(lst);						/* attendu: [Salut] -> [Hello] -> NULL */

	printf("\n=== ft_lstadd_back ===\n");
	ft_lstadd_back(&lst, ft_lstnew("Ca va"));
	print_lst(lst);						/* attendu: [Salut] -> [Hello] -> [Ca va] -> NULL */

	printf("\n=== ft_lstsize ===\n");
	printf("%d\n", ft_lstsize(lst));			/* attendu: 3 */

	printf("\n=== ft_lstlast ===\n");
	printf("%s\n", (char *)ft_lstlast(lst)->content);	/* attendu: Ca va */

	printf("\n=== ft_lstiter ===\n");
	ft_lstiter(lst, print_content);			/* attendu: Salut Hello Ca va */

	printf("\n=== ft_lstmap ===\n");
	t_list *n2 = ft_lstnew("bonjour");
	t_list *n3 = ft_lstnew("hello");
	n2->next = n3;
	t_list *mapped = ft_lstmap(n2, to_upper, del);
	print_lst(mapped);					/* attendu: [BONJOUR] -> [HELLO] -> NULL */

	printf("\n=== ft_lstdelone ===\n");
	t_list *lone = ft_lstnew(ft_strdup("test"));
	ft_lstdelone(lone, del);
	printf("lstdelone OK\n");

	printf("\n=== ft_lstclear ===\n");
	t_list *to_clear = ft_lstnew(ft_strdup("a"));
	ft_lstadd_back(&to_clear, ft_lstnew(ft_strdup("b")));
	ft_lstclear(&to_clear, del);
	printf("%p\n", (void *)to_clear);			/* attendu: (nil) */

	return (0);
}
