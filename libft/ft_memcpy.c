#include "libft.h"

/* 	copies the n first elements of source to destination.
	Returns a pointer to the first element of destination.
	Allows overlap */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;

	d = (char *)dest;
	if (!d && !src)
		return (NULL);
	while (n--)
		*d++ = *((char *)src++);
	return (dest);
}
