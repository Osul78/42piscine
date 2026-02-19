/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobeja-n <jobeja-n@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:36:57 by jobeja-n          #+#    #+#             */
/*   Updated: 2026/02/01 14:37:00 by jobeja-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		valid_input(int x, int y);

void	build_02(int x0, int y0, int x, int y)
{
	if ((y0 == 0 && x0 == 0) || (y0 == 0 && x0 == x - 1))
	{
		ft_putchar('A');
	}
	else if ((y0 == y - 1 && x0 == 0) || (y0 == y - 1 && x0 == x - 1))
	{
		ft_putchar('C');
	}
	else if (y0 == 0 || y0 == y - 1 || x0 == 0 || x0 == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar (' ');
	}
}

void	print_fig_02(int x, int y)
{
	int	x0;
	int	y0;

	y0 = 0;
	while (y0 < y)
	{
		x0 = 0;
		while (x0 < x)
		{
			build_02(x0, y0, x, y);
			x0 = x0 + 1;
		}
		ft_putchar('\n');
		y0 = y0 + 1;
	}
}

void	rush02(int x, int y)
{
	if (valid_input(x, y) == 0)
	{
		return ;
	}
	print_fig_02(x, y);
}
