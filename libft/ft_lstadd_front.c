#include "libft.h"

/* adds an element to the beginning of the list */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst && !new)
		return ;
	temp = (*lst);
	(*lst) = new;
	new->next = temp;
}
