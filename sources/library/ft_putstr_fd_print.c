#include "../../header/ft_printf.h"

/* putstr with a given file descriptor */

void	ft_putstr_fd_print(char *s, int fd, size_t len, t_tot *tot)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		ft_putchar_fd_print(*s, fd, tot);
		i++;
		s++;
	}
}
