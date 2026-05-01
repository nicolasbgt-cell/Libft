#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>

static int			g_pass;
static int			g_fail;
static const char	*g_current;

#define CHECK(cond, msg) do { \
	if (cond) g_pass++; \
	else { g_fail++; printf("  [FAIL] %s: %s\n", g_current, msg); } \
} while (0)

#define TMP_FILE "/tmp/ft_libft_test_output"

static int	test_isalpha(void);
static int	test_isdigit(void);
static int	test_isalnum(void);
static int	test_isascii(void);
static int	test_isprint(void);
static int	test_toupper(void);
static int	test_tolower(void);
static int	test_atoi(void);
static int	test_strlen(void);
static int	test_strlcpy(void);
static int	test_strlcat(void);
static int	test_strncmp(void);
static int	test_strchr(void);
static int	test_strrchr(void);
static int	test_strnstr(void);
static int	test_strdup(void);
static int	test_memset(void);
static int	test_bzero(void);
static int	test_memcpy(void);
static int	test_memmove(void);
static int	test_memchr(void);
static int	test_memcmp(void);
static int	test_calloc(void);
static int	test_substr(void);
static int	test_strjoin(void);
static int	test_strtrim(void);
static int	test_split(void);
static int	test_itoa(void);
static int	test_strmapi(void);
static int	test_striteri(void);
static int	test_putchar_fd(void);
static int	test_putstr_fd(void);
static int	test_putendl_fd(void);
static int	test_putnbr_fd(void);
static int	test_lstnew(void);
static int	test_lstadd_front(void);
static int	test_lstsize(void);
static int	test_lstlast(void);
static int	test_lstadd_back(void);
static int	test_lstdelone(void);
static int	test_lstclear(void);
static int	test_lstiter(void);
static int	test_lstmap(void);

typedef struct s_test
{
	const char	*name;
	int			(*fn)(void);
}	t_test;

static const t_test	g_tests[] = {
	{"isalpha",       test_isalpha},
	{"isdigit",       test_isdigit},
	{"isalnum",       test_isalnum},
	{"isascii",       test_isascii},
	{"isprint",       test_isprint},
	{"toupper",       test_toupper},
	{"tolower",       test_tolower},
	{"atoi",          test_atoi},
	{"strlen",        test_strlen},
	{"strlcpy",       test_strlcpy},
	{"strlcat",       test_strlcat},
	{"strncmp",       test_strncmp},
	{"strchr",        test_strchr},
	{"strrchr",       test_strrchr},
	{"strnstr",       test_strnstr},
	{"strdup",        test_strdup},
	{"memset",        test_memset},
	{"bzero",         test_bzero},
	{"memcpy",        test_memcpy},
	{"memmove",       test_memmove},
	{"memchr",        test_memchr},
	{"memcmp",        test_memcmp},
	{"calloc",        test_calloc},
	{"substr",        test_substr},
	{"strjoin",       test_strjoin},
	{"strtrim",       test_strtrim},
	{"split",         test_split},
	{"itoa",          test_itoa},
	{"strmapi",       test_strmapi},
	{"striteri",      test_striteri},
	{"putchar_fd",    test_putchar_fd},
	{"putstr_fd",     test_putstr_fd},
	{"putendl_fd",    test_putendl_fd},
	{"putnbr_fd",     test_putnbr_fd},
	{"lstnew",        test_lstnew},
	{"lstadd_front",  test_lstadd_front},
	{"lstsize",       test_lstsize},
	{"lstlast",       test_lstlast},
	{"lstadd_back",   test_lstadd_back},
	{"lstdelone",     test_lstdelone},
	{"lstclear",      test_lstclear},
	{"lstiter",       test_lstiter},
	{"lstmap",        test_lstmap},
	{NULL, NULL}
};

static int	open_tmp(void)
{
	return (open(TMP_FILE, O_WRONLY | O_CREAT | O_TRUNC, 0644));
}

static char	*read_tmp(void)
{
	static char	buf[1024];
	int			fd;
	ssize_t		n;

	fd = open(TMP_FILE, O_RDONLY);
	if (fd < 0)
		return ((char *)"");
	n = read(fd, buf, sizeof(buf) - 1);
	close(fd);
	unlink(TMP_FILE);
	if (n < 0)
		n = 0;
	buf[n] = 0;
	return (buf);
}

static void	del_content(void *p)
{
	free(p);
}

static void	*dup_int_content(void *p)
{
	int	*r;

	r = malloc(sizeof(int));
	if (r)
		*r = *(int *)p;
	return (r);
}

static void	incr_int_content(void *p)
{
	(*(int *)p)++;
}

static char	upper_mapi(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static void	upper_iteri(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

static int	test_isalpha(void)
{
	CHECK(ft_isalpha('a') && isalpha('a'), "ft_isalpha('a')");
	CHECK(ft_isalpha('Z') && isalpha('Z'), "ft_isalpha('Z')");
	CHECK(!ft_isalpha('0'), "ft_isalpha('0')");
	CHECK(!ft_isalpha(' '), "ft_isalpha(' ')");
	CHECK(!ft_isalpha(0), "ft_isalpha(0)");
	return (0);
}

static int	test_isdigit(void)
{
	CHECK(ft_isdigit('0'), "ft_isdigit('0')");
	CHECK(ft_isdigit('9'), "ft_isdigit('9')");
	CHECK(!ft_isdigit('a'), "ft_isdigit('a')");
	CHECK(!ft_isdigit(' '), "ft_isdigit(' ')");
	return (0);
}

static int	test_isalnum(void)
{
	CHECK(ft_isalnum('a'), "ft_isalnum('a')");
	CHECK(ft_isalnum('5'), "ft_isalnum('5')");
	CHECK(!ft_isalnum(' '), "ft_isalnum(' ')");
	CHECK(!ft_isalnum('!'), "ft_isalnum('!')");
	return (0);
}

static int	test_isascii(void)
{
	CHECK(ft_isascii(0), "ft_isascii(0)");
	CHECK(ft_isascii(127), "ft_isascii(127)");
	CHECK(!ft_isascii(128), "ft_isascii(128)");
	CHECK(!ft_isascii(-1), "ft_isascii(-1)");
	return (0);
}

static int	test_isprint(void)
{
	CHECK(ft_isprint(' '), "ft_isprint(' ')");
	CHECK(ft_isprint('~'), "ft_isprint('~')");
	CHECK(!ft_isprint(31), "ft_isprint(31)");
	CHECK(!ft_isprint(127), "ft_isprint(127)");
	return (0);
}

static int	test_toupper(void)
{
	CHECK(ft_toupper('a') == 'A', "ft_toupper('a')");
	CHECK(ft_toupper('z') == 'Z', "ft_toupper('z')");
	CHECK(ft_toupper('A') == 'A', "ft_toupper('A')");
	CHECK(ft_toupper('5') == '5', "ft_toupper('5')");
	return (0);
}

static int	test_tolower(void)
{
	CHECK(ft_tolower('A') == 'a', "ft_tolower('A')");
	CHECK(ft_tolower('Z') == 'z', "ft_tolower('Z')");
	CHECK(ft_tolower('a') == 'a', "ft_tolower('a')");
	CHECK(ft_tolower('5') == '5', "ft_tolower('5')");
	return (0);
}

static int	test_atoi(void)
{
	CHECK(ft_atoi("42") == 42, "ft_atoi(\"42\")");
	CHECK(ft_atoi("-42") == -42, "ft_atoi(\"-42\")");
	CHECK(ft_atoi("  +42") == 42, "ft_atoi(\"  +42\")");
	CHECK(ft_atoi("\t\n -7abc") == -7, "ft_atoi mixed");
	CHECK(ft_atoi("0") == 0, "ft_atoi(\"0\")");
	CHECK(ft_atoi("2147483647") == INT_MAX, "ft_atoi INT_MAX");
	CHECK(ft_atoi("-2147483648") == INT_MIN, "ft_atoi INT_MIN");
	CHECK(ft_atoi("") == 0, "ft_atoi(\"\")");
	return (0);
}

static int	test_strlen(void)
{
	CHECK(ft_strlen("") == 0, "ft_strlen(\"\")");
	CHECK(ft_strlen("a") == 1, "ft_strlen(\"a\")");
	CHECK(ft_strlen("hello") == 5, "ft_strlen(\"hello\")");
	CHECK(ft_strlen("42 school") == 9, "ft_strlen(\"42 school\")");
	return (0);
}

static int	test_strlcpy(void)
{
	char	dst[16];
	size_t	r;

	memset(dst, 'X', 16);
	r = ft_strlcpy(dst, "hello", 16);
	CHECK(r == 5, "strlcpy return value");
	CHECK(strcmp(dst, "hello") == 0, "strlcpy content");
	memset(dst, 'X', 16);
	r = ft_strlcpy(dst, "hello world", 6);
	CHECK(r == 11, "strlcpy truncated return");
	CHECK(strcmp(dst, "hello") == 0, "strlcpy truncated content");
	r = ft_strlcpy(dst, "anything", 0);
	CHECK(r == 8, "strlcpy size 0 returns srclen");
	return (0);
}

static int	test_strlcat(void)
{
	char	dst[16];
	size_t	r;

	strcpy(dst, "Hi ");
	r = ft_strlcat(dst, "there", 16);
	CHECK(r == 8, "strlcat return value");
	CHECK(strcmp(dst, "Hi there") == 0, "strlcat content");
	strcpy(dst, "Hi ");
	r = ft_strlcat(dst, "there", 5);
	CHECK(r == 8, "strlcat truncated return");
	CHECK(strcmp(dst, "Hi t") == 0, "strlcat truncated content");
	return (0);
}

static int	test_strncmp(void)
{
	CHECK(ft_strncmp("abc", "abc", 3) == 0, "strncmp equal");
	CHECK(ft_strncmp("abc", "abd", 3) < 0, "strncmp less");
	CHECK(ft_strncmp("abd", "abc", 3) > 0, "strncmp greater");
	CHECK(ft_strncmp("abc", "abd", 2) == 0, "strncmp partial equal");
	CHECK(ft_strncmp("abc", "abc", 0) == 0, "strncmp n=0");
	CHECK(ft_strncmp("", "", 5) == 0, "strncmp empty");
	return (0);
}

static int	test_strchr(void)
{
	const char	*s = "hello world";

	CHECK(ft_strchr(s, 'h') == s, "strchr first char");
	CHECK(ft_strchr(s, 'o') == s + 4, "strchr middle");
	CHECK(ft_strchr(s, 'd') == s + 10, "strchr last");
	CHECK(ft_strchr(s, '\0') == s + 11, "strchr terminator");
	CHECK(ft_strchr(s, 'z') == NULL, "strchr not found");
	return (0);
}

static int	test_strrchr(void)
{
	const char	*s = "hello world";

	CHECK(ft_strrchr(s, 'l') == s + 9, "strrchr last l");
	CHECK(ft_strrchr(s, 'o') == s + 7, "strrchr last o");
	CHECK(ft_strrchr(s, 'h') == s, "strrchr first char");
	CHECK(ft_strrchr(s, '\0') == s + 11, "strrchr terminator");
	CHECK(ft_strrchr(s, 'z') == NULL, "strrchr not found");
	return (0);
}

static int	test_strnstr(void)
{
	const char	*s = "hello world";

	CHECK(ft_strnstr(s, "world", 11) == s + 6, "strnstr found");
	CHECK(ft_strnstr(s, "world", 10) == NULL, "strnstr out of range");
	CHECK(ft_strnstr(s, "", 5) == s, "strnstr empty needle");
	CHECK(ft_strnstr(s, "xyz", 11) == NULL, "strnstr not found");
	CHECK(ft_strnstr(s, "hello", 5) == s, "strnstr exact range");
	return (0);
}

static int	test_strdup(void)
{
	char	*r;

	r = ft_strdup("hello");
	CHECK(r != NULL, "strdup non-null");
	CHECK(r && strcmp(r, "hello") == 0, "strdup content");
	free(r);
	r = ft_strdup("");
	CHECK(r != NULL, "strdup empty non-null");
	CHECK(r && strcmp(r, "") == 0, "strdup empty content");
	free(r);
	return (0);
}

static int	test_memset(void)
{
	char	buf[10];

	ft_memset(buf, 'A', 10);
	CHECK(memcmp(buf, "AAAAAAAAAA", 10) == 0, "memset fill A");
	ft_memset(buf, 0, 5);
	CHECK(memcmp(buf, "\0\0\0\0\0", 5) == 0, "memset zero partial");
	CHECK(buf[5] == 'A', "memset partial preserves rest");
	return (0);
}

static int	test_bzero(void)
{
	char	buf[8];

	memset(buf, 'X', 8);
	ft_bzero(buf, 4);
	CHECK(memcmp(buf, "\0\0\0\0", 4) == 0, "bzero first 4");
	CHECK(buf[4] == 'X' && buf[7] == 'X', "bzero preserves rest");
	return (0);
}

static int	test_memcpy(void)
{
	char	dst[16];
	void	*r;

	memset(dst, 0, 16);
	r = ft_memcpy(dst, "hello", 5);
	CHECK(r == dst, "memcpy returns dst");
	CHECK(memcmp(dst, "hello", 5) == 0, "memcpy content");
	r = ft_memcpy(dst, "abc", 0);
	CHECK(r == dst, "memcpy n=0 returns dst");
	return (0);
}

static int	test_memmove(void)
{
	char	buf[16] = "hello world";

	ft_memmove(buf + 6, buf, 5);
	CHECK(memcmp(buf, "hello hello", 11) == 0, "memmove forward overlap");
	strcpy(buf, "hello world");
	ft_memmove(buf, buf + 6, 5);
	CHECK(memcmp(buf, "world", 5) == 0, "memmove backward overlap");
	return (0);
}

static int	test_memchr(void)
{
	const char	*s = "hello world";

	CHECK(ft_memchr(s, 'w', 11) == s + 6, "memchr found");
	CHECK(ft_memchr(s, 'w', 6) == NULL, "memchr out of range");
	CHECK(ft_memchr(s, 'h', 11) == s, "memchr first");
	CHECK(ft_memchr(s, 'z', 11) == NULL, "memchr not found");
	return (0);
}

static int	test_memcmp(void)
{
	CHECK(ft_memcmp("abc", "abc", 3) == 0, "memcmp equal");
	CHECK(ft_memcmp("abc", "abd", 3) < 0, "memcmp less");
	CHECK(ft_memcmp("abd", "abc", 3) > 0, "memcmp greater");
	CHECK(ft_memcmp("abc", "abd", 2) == 0, "memcmp partial equal");
	CHECK(ft_memcmp("\0a", "\0b", 2) < 0, "memcmp through NUL");
	return (0);
}

static int	test_calloc(void)
{
	char	*r;
	int		i;

	r = ft_calloc(10, sizeof(char));
	CHECK(r != NULL, "calloc non-null");
	if (r)
	{
		i = 0;
		while (i < 10 && r[i] == 0)
			i++;
		CHECK(i == 10, "calloc zeroed");
		free(r);
	}
	r = ft_calloc(0, 0);
	CHECK(r != NULL, "calloc(0,0) non-null");
	free(r);
	return (0);
}

static int	test_substr(void)
{
	char	*r;

	r = ft_substr("hello world", 6, 5);
	CHECK(r && strcmp(r, "world") == 0, "substr middle");
	free(r);
	r = ft_substr("hello", 0, 100);
	CHECK(r && strcmp(r, "hello") == 0, "substr len > strlen");
	free(r);
	r = ft_substr("hello", 100, 5);
	CHECK(r && strcmp(r, "") == 0, "substr start > strlen");
	free(r);
	r = ft_substr("hello", 1, 0);
	CHECK(r && strcmp(r, "") == 0, "substr len 0");
	free(r);
	return (0);
}

static int	test_strjoin(void)
{
	char	*r;

	r = ft_strjoin("hello ", "world");
	CHECK(r && strcmp(r, "hello world") == 0, "strjoin normal");
	free(r);
	r = ft_strjoin("", "world");
	CHECK(r && strcmp(r, "world") == 0, "strjoin empty s1");
	free(r);
	r = ft_strjoin("hello", "");
	CHECK(r && strcmp(r, "hello") == 0, "strjoin empty s2");
	free(r);
	r = ft_strjoin("", "");
	CHECK(r && strcmp(r, "") == 0, "strjoin both empty");
	free(r);
	return (0);
}

static int	test_strtrim(void)
{
	char	*r;

	r = ft_strtrim("  hello  ", " ");
	CHECK(r && strcmp(r, "hello") == 0, "strtrim spaces");
	free(r);
	r = ft_strtrim("xxhelloxx", "x");
	CHECK(r && strcmp(r, "hello") == 0, "strtrim x");
	free(r);
	r = ft_strtrim("hello", "x");
	CHECK(r && strcmp(r, "hello") == 0, "strtrim no match");
	free(r);
	r = ft_strtrim("xxxx", "x");
	CHECK(r && strcmp(r, "") == 0, "strtrim all match");
	free(r);
	return (0);
}

static int	test_split(void)
{
	char	**r;
	int		i;

	r = ft_split("hello world foo", ' ');
	CHECK(r != NULL, "split non-null");
	CHECK(r && r[0] && strcmp(r[0], "hello") == 0, "split[0]");
	CHECK(r && r[1] && strcmp(r[1], "world") == 0, "split[1]");
	CHECK(r && r[2] && strcmp(r[2], "foo") == 0, "split[2]");
	CHECK(r && r[3] == NULL, "split NULL terminated");
	if (r)
	{
		i = 0;
		while (r[i])
			free(r[i++]);
		free(r);
	}
	r = ft_split("   hello   world   ", ' ');
	CHECK(r && r[0] && strcmp(r[0], "hello") == 0, "split leading delim");
	CHECK(r && r[1] && strcmp(r[1], "world") == 0, "split trailing delim");
	CHECK(r && r[2] == NULL, "split [2] NULL");
	if (r)
	{
		i = 0;
		while (r[i])
			free(r[i++]);
		free(r);
	}
	r = ft_split("", ' ');
	CHECK(r && r[0] == NULL, "split empty");
	free(r);
	return (0);
}

static int	test_itoa(void)
{
	char	*r;

	r = ft_itoa(0);
	CHECK(r && strcmp(r, "0") == 0, "itoa 0");
	free(r);
	r = ft_itoa(42);
	CHECK(r && strcmp(r, "42") == 0, "itoa 42");
	free(r);
	r = ft_itoa(-42);
	CHECK(r && strcmp(r, "-42") == 0, "itoa -42");
	free(r);
	r = ft_itoa(INT_MAX);
	CHECK(r && strcmp(r, "2147483647") == 0, "itoa INT_MAX");
	free(r);
	r = ft_itoa(INT_MIN);
	CHECK(r && strcmp(r, "-2147483648") == 0, "itoa INT_MIN");
	free(r);
	return (0);
}

static int	test_strmapi(void)
{
	char	*r;

	r = ft_strmapi("hello", upper_mapi);
	CHECK(r && strcmp(r, "HELLO") == 0, "strmapi upper");
	free(r);
	r = ft_strmapi("", upper_mapi);
	CHECK(r && strcmp(r, "") == 0, "strmapi empty");
	free(r);
	return (0);
}

static int	test_striteri(void)
{
	char	buf[16];

	strcpy(buf, "hello");
	ft_striteri(buf, upper_iteri);
	CHECK(strcmp(buf, "HELLO") == 0, "striteri upper");
	strcpy(buf, "");
	ft_striteri(buf, upper_iteri);
	CHECK(strcmp(buf, "") == 0, "striteri empty");
	return (0);
}

static int	test_putchar_fd(void)
{
	int	fd;

	fd = open_tmp();
	ft_putchar_fd('A', fd);
	close(fd);
	CHECK(strcmp(read_tmp(), "A") == 0, "putchar_fd 'A'");
	fd = open_tmp();
	ft_putchar_fd('\n', fd);
	close(fd);
	CHECK(strcmp(read_tmp(), "\n") == 0, "putchar_fd newline");
	return (0);
}

static int	test_putstr_fd(void)
{
	int	fd;

	fd = open_tmp();
	ft_putstr_fd("hello", fd);
	close(fd);
	CHECK(strcmp(read_tmp(), "hello") == 0, "putstr_fd hello");
	fd = open_tmp();
	ft_putstr_fd("", fd);
	close(fd);
	CHECK(strcmp(read_tmp(), "") == 0, "putstr_fd empty");
	return (0);
}

static int	test_putendl_fd(void)
{
	int	fd;

	fd = open_tmp();
	ft_putendl_fd("hello", fd);
	close(fd);
	CHECK(strcmp(read_tmp(), "hello\n") == 0, "putendl_fd hello");
	fd = open_tmp();
	ft_putendl_fd("", fd);
	close(fd);
	CHECK(strcmp(read_tmp(), "\n") == 0, "putendl_fd empty");
	return (0);
}

static int	test_putnbr_fd(void)
{
	int	fd;

	fd = open_tmp();
	ft_putnbr_fd(42, fd);
	close(fd);
	CHECK(strcmp(read_tmp(), "42") == 0, "putnbr_fd 42");
	fd = open_tmp();
	ft_putnbr_fd(-42, fd);
	close(fd);
	CHECK(strcmp(read_tmp(), "-42") == 0, "putnbr_fd -42");
	fd = open_tmp();
	ft_putnbr_fd(0, fd);
	close(fd);
	CHECK(strcmp(read_tmp(), "0") == 0, "putnbr_fd 0");
	fd = open_tmp();
	ft_putnbr_fd(INT_MIN, fd);
	close(fd);
	CHECK(strcmp(read_tmp(), "-2147483648") == 0, "putnbr_fd INT_MIN");
	fd = open_tmp();
	ft_putnbr_fd(INT_MAX, fd);
	close(fd);
	CHECK(strcmp(read_tmp(), "2147483647") == 0, "putnbr_fd INT_MAX");
	return (0);
}

static int	test_lstnew(void)
{
	t_list	*node;
	int		v;

	v = 42;
	node = ft_lstnew(&v);
	CHECK(node != NULL, "lstnew non-null");
	CHECK(node && node->content == &v, "lstnew content");
	CHECK(node && node->next == NULL, "lstnew next NULL");
	free(node);
	return (0);
}

static int	test_lstadd_front(void)
{
	t_list	*lst;
	int		a;
	int		b;

	a = 1;
	b = 2;
	lst = ft_lstnew(&a);
	ft_lstadd_front(&lst, ft_lstnew(&b));
	CHECK(lst && lst->content == &b, "lstadd_front new head");
	CHECK(lst && lst->next && lst->next->content == &a, "lstadd_front old next");
	free(lst->next);
	free(lst);
	return (0);
}

static int	test_lstsize(void)
{
	t_list	*lst;
	int		v;

	v = 1;
	CHECK(ft_lstsize(NULL) == 0, "lstsize NULL");
	lst = ft_lstnew(&v);
	CHECK(ft_lstsize(lst) == 1, "lstsize 1");
	ft_lstadd_front(&lst, ft_lstnew(&v));
	ft_lstadd_front(&lst, ft_lstnew(&v));
	CHECK(ft_lstsize(lst) == 3, "lstsize 3");
	while (lst)
	{
		t_list *tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	return (0);
}

static int	test_lstlast(void)
{
	t_list	*lst;
	t_list	*last;
	int		a;
	int		b;

	a = 1;
	b = 2;
	CHECK(ft_lstlast(NULL) == NULL, "lstlast NULL");
	lst = ft_lstnew(&a);
	CHECK(ft_lstlast(lst) == lst, "lstlast single");
	last = ft_lstnew(&b);
	lst->next = last;
	CHECK(ft_lstlast(lst) == last, "lstlast multi");
	free(last);
	free(lst);
	return (0);
}

static int	test_lstadd_back(void)
{
	t_list	*lst;
	int		a;
	int		b;

	a = 1;
	b = 2;
	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(&a));
	CHECK(lst && lst->content == &a, "lstadd_back to NULL");
	ft_lstadd_back(&lst, ft_lstnew(&b));
	CHECK(lst && lst->next && lst->next->content == &b, "lstadd_back appends");
	free(lst->next);
	free(lst);
	return (0);
}

static int	test_lstdelone(void)
{
	t_list	*node;
	int		*v;

	v = malloc(sizeof(int));
	*v = 42;
	node = ft_lstnew(v);
	ft_lstdelone(node, del_content);
	CHECK(1, "lstdelone runs without crash");
	return (0);
}

static int	test_lstclear(void)
{
	t_list	*lst;
	int		*a;
	int		*b;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	*a = 1;
	*b = 2;
	lst = ft_lstnew(a);
	ft_lstadd_back(&lst, ft_lstnew(b));
	ft_lstclear(&lst, del_content);
	CHECK(lst == NULL, "lstclear sets to NULL");
	return (0);
}

static int	test_lstiter(void)
{
	t_list	*lst;
	int		a;
	int		b;

	a = 1;
	b = 2;
	lst = ft_lstnew(&a);
	ft_lstadd_back(&lst, ft_lstnew(&b));
	ft_lstiter(lst, incr_int_content);
	CHECK(a == 2, "lstiter incremented a");
	CHECK(b == 3, "lstiter incremented b");
	free(lst->next);
	free(lst);
	return (0);
}

static int	test_lstmap(void)
{
	t_list	*src;
	t_list	*dst;
	int		a;
	int		b;

	a = 10;
	b = 20;
	src = ft_lstnew(&a);
	ft_lstadd_back(&src, ft_lstnew(&b));
	dst = ft_lstmap(src, dup_int_content, del_content);
	CHECK(dst != NULL, "lstmap non-null");
	CHECK(dst && dst->content && *(int *)dst->content == 10, "lstmap [0]");
	CHECK(dst && dst->next && *(int *)dst->next->content == 20, "lstmap [1]");
	CHECK(dst && dst->content != &a, "lstmap deep copy");
	ft_lstclear(&dst, del_content);
	free(src->next);
	free(src);
	return (0);
}

static void	usage(void)
{
	int	i;

	printf("Usage: ./test <name>  |  ./test all\n\n");
	printf("Available tests:\n");
	i = 0;
	while (g_tests[i].name)
	{
		printf("  %-15s", g_tests[i].name);
		if ((i + 1) % 4 == 0)
			printf("\n");
		i++;
	}
	if (i % 4 != 0)
		printf("\n");
}

static int	run_one(const t_test *t)
{
	int	before_pass;
	int	before_fail;

	before_pass = g_pass;
	before_fail = g_fail;
	g_current = t->name;
	t->fn();
	if (g_fail == before_fail)
		printf("[ OK ] %-15s (%d checks)\n", t->name, g_pass - before_pass);
	else
		printf("[FAIL] %-15s (%d/%d failed)\n", t->name,
			g_fail - before_fail, g_pass + g_fail - before_pass - before_fail);
	return (0);
}

static int	run_all(void)
{
	int	i;

	i = 0;
	while (g_tests[i].name)
	{
		run_one(&g_tests[i]);
		i++;
	}
	printf("\n=== %d passed, %d failed ===\n", g_pass, g_fail);
	return (g_fail == 0 ? 0 : 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		usage();
		return (0);
	}
	if (strcmp(argv[1], "all") == 0)
		return (run_all());
	i = 0;
	while (g_tests[i].name)
	{
		if (strcmp(argv[1], g_tests[i].name) == 0)
		{
			run_one(&g_tests[i]);
			printf("\n=== %d passed, %d failed ===\n", g_pass, g_fail);
			return (g_fail == 0 ? 0 : 1);
		}
		i++;
	}
	printf("Unknown test: %s\n\n", argv[1]);
	usage();
	return (1);
}
