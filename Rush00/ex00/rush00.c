/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:41:13 by andrcard          #+#    #+#             */
/*   Updated: 2026/01/31 14:22:21 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		valid_input(int x, int y);

void	build_00(int x0, int y0, int x, int y)
{
	if ((x0 == 0 || x0 == x - 1) && (y0 == 0 || y0 == y - 1))
	{
		ft_putchar('o');
	}
	else if (x0 == 0 || x0 == x - 1)
	{
		ft_putchar('|');
	}
	else if (y0 == 0 || y0 == y - 1)
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	print_fig_00(int x, int y)
{
	int	x0;
	int	y0;

	y0 = 0;
	while (y0 < y)
	{
		x0 = 0;
		while (x0 < x)
		{
			build_00(x0, y0, x, y);
			x0 = x0 + 1;
		}
		ft_putchar('\n');
		y0 = y0 + 1;
	}
}

void	rush(int x, int y)
{
	if (valid_input(x, y) == 0)
	{
		return ;
	}
	print_fig_00(x, y);
}
