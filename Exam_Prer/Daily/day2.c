/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   day2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:43:58 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/19 12:02:32 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	numb;
	int	sign;

	numb = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
		sign *= (44 - *(str++));
	while (*str >= '0' && *str <= '9')
		numb = (numb * 10) + (*(str++) - 48) * sign;
	return (numb);
}

// void	ft_putnbr(int nb)
// {
// 	if (nb < 0)
// 		write(1, "-", 1);
// 	if (nb > 9 || nb < -9)
// 		ft_putnbr(nb / 10 * (((nb >= 0) - 1) | 1));
// 	write(1, &("0123456789"[nb % 10 * (((nb >= 0) - 1) | 1)]), 1);
// }

void	ft_putnbr(int nb) // by: igomes-d (xoxo)
{
	(((nb < 0) 
		&& write(1, "-", 1)) || 1) 
	&& (((nb > 9 || nb < -9)
			&& (ft_putnbr(nb / 10 * (((nb >= 0) - 1) | 1)), 1)) || 1)
	&& write(1, &("0123456789"[nb % 10 * (((nb >= 0) - 1) | 1)]), 1);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	printf("%i", ft_atoi("  \t   ----42"));
}
