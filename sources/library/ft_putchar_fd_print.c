#include "../../header/ft_printf.h"

/* fonction to write a char on the chosen file descriptor */

void	ft_putchar_fd_print(char c, int fd, t_tot *tot)
{
	write (fd, &c, 1);
	tot->n++;
}
