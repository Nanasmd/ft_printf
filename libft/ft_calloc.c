#include "libft.h"

/* 	allocates memory of size size * nmemb.
	fills elements with 0 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*array;

	array = (char *)malloc(size * nmemb);
	if (!array)
		return (NULL);
	ft_bzero(array, size * nmemb);
	return (array);
}
