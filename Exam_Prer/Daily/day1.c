/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   day1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 21:00:33 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/18 21:15:08 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	numb;
	int	i;

	numb = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		sign = (44 - str[i]) * sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = (numb *10) + (str[i] - '0');
		i++;
	}
	return (numb * sign);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648\n", 12);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		nb = nb % 10 + '0';
		write(1, &nb, 1);
	}
}

int	main(void)
{
	ft_putnbr(455);
}