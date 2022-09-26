#include "../../header/ft_printf.h"

// simple basic printing function for types i and d

void	ft_printf_x_basic(t_flags flags, t_char d, t_tot *tot)
{
	int	i;

	i = 0;
	if (flags.dot == 1 && d.lui == 0)
		return ;
	while (flags.str[i] != '\0')
	{
		ft_putchar_fd_print(flags.str[i], 1, tot);
		i++;
	}
}

// initiates the variables for the following functions

void	ft_x_setup(t_flags flags, va_list args, t_tot *tot)
{
	t_char	d;

	d.lui = va_arg(args, unsigned long int);
	flags.str = ft_itoa_printf_x(d.lui, d, flags);
	d.len = (int)ft_strlen(flags.str);
	ft_printf_x_basic(flags, d, tot);
	free (flags.str);
}
