/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 13:58:28 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/08 16:03:21 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printsquare(int grid[4][4]);
int		ft_csi(char *strarg, int *viewpoints);

int	main(int argc, char **argv)
{
	int	viewpoints[16];
	int	grid[4][4];

	if (argc != 2 || !ft_csi(argv[1], viewpoints))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else
		ft_printsquare(grid);
	return (0);
}
