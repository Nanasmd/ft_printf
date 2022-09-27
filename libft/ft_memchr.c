#include "libft.h"

/* 	finds char c in the n first elements of a string
	then returns the remaining of string */

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*str;

	str = (char *)s;
	while (n--)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/*
int main()
{
	char s[] = "j'ai faim donne moi a manger";
	int c = 'k';
	
	printf("%s\n", (char *)ft_memchr(s, c, 10));
	printf("%s\n", (char *)memchr(s, c, 10));
}
*/
