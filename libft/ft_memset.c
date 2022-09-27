#include "libft.h"

/* sets the n first elements of a string to a given char */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n)
	{
		*str = (const char)c;
		str++;
		n--;
	}
	return (s);
}

/*
int main()
{
	char s[] = "blablabla";

	ft_memset(s, 'A', 5);
	printf("%s\n", s);
	return 0;
}
*/
