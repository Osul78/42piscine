/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:36:32 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/14 14:37:51 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	i = nb - 1;
	if (nb > 0)
	{
		while (i > 0)
		{
			nb *= i;
			i--;
		}
		return (nb);
	}
	return (0);
}

// int	main(void)
// {
// 	int	nb = 0;

// 	printf("Teste: %i", ft_iterative_factorial(nb));
// }