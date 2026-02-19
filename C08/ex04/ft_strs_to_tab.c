/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 10:54:29 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/16 19:21:57 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i])
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*s1;
	int					i;
	int					j;

	i = 0;
	s1 = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (s1 == 0)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		s1[i].size = j;
		s1[i].str = av[i];
		s1[i].copy = ft_strdup(av[i]);
		i++;
	}
	s1[i].str = 0;
	return (s1);
}
