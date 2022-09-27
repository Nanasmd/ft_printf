#include "libft.h"

/* returns the amount of characters a string contains (careful, starts at 0) */

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
