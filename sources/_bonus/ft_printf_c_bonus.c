#include "ft_printf_bonus.h"

void	ft_printf_c_bonus(t_flags flags, t_char c, t_tot *tot)
{
	c.i = 0;
	if (flags.number == 0)
		ft_putchar_fd_print(c.c, 1, tot);
	else if (flags.number != 0 && flags.zemin != 1)
	{
		while (c.i++ < flags.number - 1)
			ft_putchar_fd_print(' ', 1, tot);
		ft_putchar_fd_print(c.c, 1, tot);
	}
	else if (flags.number != 0 && flags.zemin == 1)
	{
		ft_putchar_fd_print(c.c, 1, tot);
		while (c.i++ < flags.number - 1)
			ft_putchar_fd_print(' ', 1, tot);
	}
}

void	ft_c_setup(t_flags flags, va_list args, t_tot *tot)
{
	t_char	c;

	if (flags.param == '%')
	{
		ft_putchar_fd_print('%', 1, tot);
		return ;
	}
	c.c = va_arg(args, int);
	ft_printf_c_bonus(flags, c, tot);
}
