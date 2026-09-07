#include "libft.h"
//#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = (t_list *)malloc(sizeof(*elt));
	if (elt == NULL)
		return (NULL);
	elt->content = content;
	elt->next = NULL;
	return (elt);
}

/*int	main(void)
{
	t_list	*node1 = ft_lstnew("Bonjour");
        printf("%s\n", (char *)node1->content);
        return (0);
}*/
