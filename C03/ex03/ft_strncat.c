/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:20:21 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/11 21:44:51 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (nb > 0)
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		while (j < nb && src[j])
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

// int main(void)
// {
//     char    dest[] = "Teste01";
//     char    src[] = "10etseT";

//     printf("Teste01: %s", ft_strncat(dest, src, 3));
// }
