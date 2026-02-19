/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:27:55 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/11 21:23:12 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putnbr(int nb)
{
	int			a;
	long int	x;

	x = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		x = x * -1;
	}
	if (x > 9)
		ft_putnbr(x / 10);
	a = (x % 10) + '0';
	write(1, &a, 1);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 1;
// 	ft_putnbr(nb);
// }
