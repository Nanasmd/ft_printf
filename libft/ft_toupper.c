#include "libft.h"

/* converts a lowercase letter to its capital counterpart */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return ((c - 32));
	else
		return (c);
}
