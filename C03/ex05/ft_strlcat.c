/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 19:26:59 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/11 21:45:30 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
// #include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;

	i = 0;
	j = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x])
		x++;
	if (size < i)
		return (size + x);
	while (j < size - 1 - i && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + x);
}

// int	main(void)
// {
// 	char	dest[] = "12345";
// 	char	src[] = "6789";
// 	unsigned	int	size = 20;

// 	printf("%i", ft_strlcat(dest, src, size));
// 	// printf("%zu", strlcat(dest, src, size));
// }
