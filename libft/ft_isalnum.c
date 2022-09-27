#include "libft.h"

/* check if char c is alphanumerical. Returns 1 if true */

int	ft_isalnum(int c)
{
	if ((65 <= c && c <= 90)
		|| (97 <= c && c <= 122)
		|| (48 <= c && c <= 57))
		return (1);
	return (0);
}
