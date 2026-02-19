/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 21:42:49 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/15 12:43:51 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i])
		i++;
	str = malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	char src[] = "Ola";

// 	printf("Teste: %s", ft_strdup(src));
// }