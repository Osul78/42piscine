/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:40:37 by andrcard          #+#    #+#             */
/*   Updated: 2026/01/31 12:33:25 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	valid_input(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Oops! (Distances bigger than 0)\n", 32);
		return (0);
	}
	return (1);
}
