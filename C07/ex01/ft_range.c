/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:26:50 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/14 23:24:54 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*x;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	x = malloc((max - min) * sizeof(int));
	while (i < (max - min))
	{
		x[i] = (min + i);
		i++;
	}
	return (x);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*arr;
// 	int	i;

// 	min = 2;
// 	max = 7;
// 	arr = ft_range(min, max);
// 	i = 0;
// 	while (i < (max - min))
// 	{
// 		printf("[%i]", arr[i]);
// 		i++;
// 	}
// }
