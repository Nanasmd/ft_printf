#include "libft.h"

/* check if char c is a digit. Returns 1 if true */

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	return (0);
}
