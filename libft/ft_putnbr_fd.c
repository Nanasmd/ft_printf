#include "libft.h"

/* putnbr but chose on which file descriptor it is printed */

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	nb = n;
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + 48, fd);
}

/*
int main()
{
	ft_putnbr_fd(-2147483648, 1);
	return 0;
}
*/
