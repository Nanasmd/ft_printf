#include "libft.h"

/* deletes an element from the list */

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst && !del)
		return ;
	del(lst->content);
	free(lst);
}
