#include "libft.h"

/* fonction to write a char on the chosen file descriptor */

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
