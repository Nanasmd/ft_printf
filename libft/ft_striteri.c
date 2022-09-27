#include "libft.h"

/* applies the pointed function to every element of the string */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;
	char				*str;

	i = 0;
	str = (char *)s;
	if (!str || !f)
		return ;
	while (str[i])
	{
		f(i, &str[i]);
		i++;
	}
}
