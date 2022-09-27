#include "libft.h"

/* check if char c is ascii. Returns 1 if true */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
