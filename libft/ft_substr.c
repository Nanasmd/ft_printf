#include "libft.h"

/* 	creates a new string (memory assigned with malloc)
	start in the string
	returns the n elements following start */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new;
	size_t		i;

	i = 0;
	if (len < ft_strlen(s))
		new = (char *)malloc(sizeof(char) * len + 1);
	else
		new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	if (start > ft_strlen(s))
	{
		new[i] = '\0';
		return (new);
	}
	while (i <= len - 1 && s[i + start] != '\0' && len > 0)
	{
		new[i] = s[i + start];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
int main()
{
	char s[] = "un bazar a ajouter";
	char *d;

	d = ft_substr(s, 0, 20);
	printf("%s\n", d);
	free(d);
	return (0);
}
*/
