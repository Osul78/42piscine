/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:48:50 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/12 19:09:13 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (nb >= i * i)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	nb = 16;

// 	printf("Teste: %i", ft_sqrt(nb));
// }