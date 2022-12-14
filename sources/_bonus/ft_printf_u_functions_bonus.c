#include "ft_printf_bonus.h"

void	ft_u_001(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.spaplus != 0 && d.ui > 0)
		ft_spaplus(flags, d, flags.dot_num, tot);
	if (flags.dot == 1)
		ft_padding(0, d.i, (flags.dot_num - d.len), tot);
	ft_printf_u(flags, d, tot);
}

void	ft_u_100_1m10(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.spaplus != 0 && d.ui > 0)
		flags.number--;
	if (flags.zemin != -1)
	{
		ft_padding(1, d.i, (flags.number - d.len), tot);
		if (flags.spaplus != 0 && d.ui > 0)
			ft_spaplus(flags, d, d.i, tot);
	}
	else if (flags.zemin == -1)
	{
		if (flags.spaplus != 0 && d.ui > 0)
			ft_spaplus(flags, d, d.i, tot);
		ft_padding(0, d.i, (flags.number - d.len), tot);
	}
	ft_printf_u(flags, d, tot);
}

void	ft_u_110(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.spaplus != 0)
		flags.number = ft_spaplus(flags, d, flags.dot_num, tot);
	flags.number -= d.len;
	ft_printf_u(flags, d, tot);
	ft_padding(1, d.i, flags.number, tot);
}

void	ft_u_111(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.spaplus != 0)
		flags.number = ft_spaplus(flags, d, flags.number, tot);
	if (flags.dot_num > d.len)
	{
		ft_padding(0, d.i, (flags.dot_num - d.len), tot);
		flags.number -= flags.dot_num;
	}
	else if (flags.dot_num <= d.len)
		flags.number -= d.len;
	ft_printf_u(flags, d, tot);
	ft_padding(1, d.i, flags.number, tot);
}

void	ft_u_101(t_flags flags, t_char d, t_tot *tot)
{
	d.i = 0;
	if (flags.spaplus != 0)
		flags.number--;
	if (flags.dot_num > d.len)
		ft_padding(1, d.i, (flags.number - flags.dot_num), tot);
	else if (flags.dot_num <= d.len)
		ft_padding(1, d.i, (flags.number - d.len), tot);
	if (flags.spaplus != 0)
		ft_spaplus(flags, d, d.j, tot);
	ft_padding(0, d.i, (flags.dot_num - d.len), tot);
	ft_printf_u(flags, d, tot);
}
