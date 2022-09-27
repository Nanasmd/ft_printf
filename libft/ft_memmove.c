#include "libft.h"

/* 	copies the n first elements of source to destination.
	Returns a pointer to the first element of destination.
	Does not allow overlap - goes backwards */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char const	*s;
	unsigned char		*d;

	s = (unsigned char const *)src;
	d = (unsigned char *)dest;
	if (s < d)
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n--)
			*d-- = *s--;
	}
	else
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	return (dest);
}

/*
int main()
{
	char s[] = "1a";
	char d[] = "98";
	
	memmove(d, s, 4);
	printf("%s\n", d);
	
	return (0);
}
*/
