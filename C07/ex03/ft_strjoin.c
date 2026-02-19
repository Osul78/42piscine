/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:52:51 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/15 14:33:48 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_countstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		letters;
	int		i;
	char	*str;

	letters = 0;
	i = -1;
	while (++i < size)
	{
		letters += ft_countstr(strs[i]);
		if (i != size - 1)
			letters += ft_countstr(sep);
	}
	str = malloc((letters + 1) * sizeof(char));
	str[0] = '\0';
	if (size == 0)
		return (str);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	int size = 3;
// 	char *strs[3] = {"Hello", "world", "!"};
// 	char sep[] = ", ";

// 	printf("Teste: %s", ft_strjoin(size, strs, sep));
// }
