/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valuecod.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:28:14 by epereira          #+#    #+#             */
/*   Updated: 2026/02/08 15:05:51 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	row_valid(int grid[4][4], int row)
{
	int	j;
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] != 0)
		{
			j = i + 1;
			while (j < 4)
			{
				if (grid[row][j] != 0)
				{
					if (grid[row][i] == grid[row][j])
						return (0);
				}
				j++;
			}
		}
		i++;
	}
	return (1);
}

int	col_valid(int grid[4][4], int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (grid[i][col] != 0)
		{
			j = i + 1;
			while (j < 4)
			{
				if (grid[j][col] != 0)
				{
					if (grid[i][col] == grid[j][col])
						return (0);
				}
				j++;
			}
		}
		i++;
	}
	return (1);
}
