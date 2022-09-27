#include "libft.h"

/* 	compares n first elements of 2 strings.
	returns 0 is they are the same,
	returns the difference between the ascii value of the 2 different chars */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (++i < n && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

/*
int main()
{
	char a[] = "abcdefgh";
	char b[] = "abcdwfyz";

	printf("%d\n", memcmp(a, b, 5));	
	printf("%d\n", ft_memcmp(a, b, 5));
	return 0;
}
*/
