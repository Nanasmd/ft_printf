#include "libft.h"

/* 	finds the last occurence of c in a string.
	returns the remaining part of the string if successful
	returns NULL if not */

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;

	str = (char *)s;
	len = 0;
	while (len < (int)ft_strlen(s))
	{
		str++;
		len++;
	}
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)str);
		str--;
		len--;
	}
	return (NULL);
}

/*
int main()
{
	char s[] = "j'ai faim donne moi a manger";
	int c = 'j';
	
	printf("%s\n",ft_strrchr(s, c));
	return 0;
}
*/
