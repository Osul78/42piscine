/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 13:58:25 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/08 16:05:19 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	row_valid(int grid[4][4], int row);
int	col_valid(int grid[4][4], int col);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printsquare(int grid[4][4])
{
	(void)grid;
	write(1, "1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3\n", 32);
}

int	ft_csi(char *strarg, int *viewpoints)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (strarg[i])
	{
		if (strarg[i] >= '1' && strarg[i] <= '4')
		{
			if (count >= 16)
				return (0);
			viewpoints[count] = strarg[i] - '0';
			count++;
		}
		else if (strarg[i] != ' ')
			return (0);
		i++;
	}
	return (count == 16);
}

// void	ft_printsquare(int grid[4][4])
// {
// 	//int	row;
// 	//int	col;

// 	//row = 0;
// 	//while (row < 4)
// 	//{
// 		//col = 0;
// 		//while (col < 4)
// 		//{
// 			//ft_putchar(grid[row][col] + '0');
// 			//ft_putchar(32);
// 			//col++;
// 		//}
// 		//ft_putchar('\n');
// 		//row++;
// 	//}
// }
