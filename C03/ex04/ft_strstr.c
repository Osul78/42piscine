/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:20:11 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/11 21:45:11 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (str[i + j]))
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char    *str = "ola eu sou o andre";

//     printf("%s", ft_strstr(str, "andre"));
//     return (0);
// }
