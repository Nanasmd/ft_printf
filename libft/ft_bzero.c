#include "libft.h"

/* fills the first n elements of a string with '\0' */

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	char	x;

	str = (char *)s;
	x = '\0';
	while (n)
	{
		*str = x;
		str++;
		n--;
	}
}
