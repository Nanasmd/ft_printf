#include "libft.h"

/* points to the last element of a list */

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	if (!lst->next)
		return (lst);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
