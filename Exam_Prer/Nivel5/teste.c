/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 19:33:42 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/17 20:10:05 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

int	ft_duplicatedetect(t_list **array, int counter)
{
	int	i;
	int	j;

	i = 0;
	while (i < counter)
	{
		j = i + 1;
		while (j < counter)
		{
			if (array[i] == array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	cycle_detector(const t_list *list);
{
	int counter;
	t_list *current;
	t_list **array;
	int totalalocado;
	t_list **arraytemp;

	array = NULL;
	current = list;
	counter = 0;
	totalalocado = 0;
	while (current->next)
	{
		if (totalalocado < counter + 1)
		{
			totalalocado += 10;
			arraytemp = malloc(totalalocado * sizeof(t_list *));
			if (!arraytemp)
				return (0);
			if (array)
			{
				int	i;

				i = 0;
				while (array < counter)
				{
					arraytemp[i] = array[i];
					i++;
				}
				free(array);
			}
			array = arraytemp;
		}
		array[counter] = current;
		counter++;
		if (ft_duplicatedetect(array, counter))
			return (1);
		current = current->next;
	}
	if (array)
		free(array);
	return (0);
}

int	main(void)
{
}
