/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:30:12 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/11 21:48:13 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *nbr)
{
	int	i;
	int	numb;
	int	sign;

	i = 0;
	numb = 0;
	sign = 1;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr [i] <= 13))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		sign = (44 - nbr[i]) * sign;
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		numb = (numb * 10) + (nbr[i] - '0');
		i++;
	}
	return (numb * sign);
}

// int	main(void)
// {
// 	int	val;
// 	char	nbr[] = "          -+--1509.10E";

// 	val = ft_atoi(nbr);
// 	printf("Number: %i", val);
// }
