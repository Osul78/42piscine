/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:35:40 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/05 21:14:50 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;

	j = 0;
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[j] != '\0')
		j++;
	return (j);
}

//int main(void)
// {
//     char dest[] = "Olaaaa";
//     char src[] = "iudhuiwahiuahdh";

//    printf("%i", ft_strlcpy(dest, src, sizeof(src)));
//     printf("%s", dest);
// }
