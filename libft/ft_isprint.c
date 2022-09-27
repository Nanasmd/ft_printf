#include "libft.h"

/* check if char c is printable. Returns 1 if true */

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
