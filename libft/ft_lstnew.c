#include "libft.h"

/* allocates memory and returns a new element */

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = ((char *)content);
	new_element->next = NULL;
	return (new_element);
}

/*
int main()
{
	t_list	*element;

	char content[] = "testessai123";
	element = ft_lstnew(content);
	printf("%s\n", (char *)element->content);
	free(element);
	return 0;
}
*/
