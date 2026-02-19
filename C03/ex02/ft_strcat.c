/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:20:27 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/11 21:44:32 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
//     char    dest[] = "Teste01";
//     char    src[] = "10etseT";

//     printf("Teste01: %s", ft_strcat(dest, src));
// }
