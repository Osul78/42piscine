/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 00:10:47 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/17 09:04:09 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = (min + i);
		i++;
	}
	return (max - min);
}
/*
int	main(void)
{
	int	min = -10;
	int	max = -3;
	int *range;
	int teste;

	teste = ft_ultimate_range(&range, min, max);
	printf("%i", teste);
}*/
