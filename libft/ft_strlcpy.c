#include "libft.h"

/* 	copies n elements of source to dest.
	returns the amount of elements copied */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
int main()
{
	char d[18] = "trucmachin";
	char s[] = "12345fkopkdcowefdsf";

	printf("%ld\n", ft_strlcpy(d, s, 18));
	printf("%s\n", d);
	return (0);
}
*/
