/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:20:33 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/11 21:44:11 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
			i++;
		return (s1[i] - s2[i]);
	}
	return (0);
}

// int main(void)
// {
//     char    *s1 = "ABCDF";
//     char    *s2 = "ABCD";

//     printf("Teste00: %i", ft_strncmp(s1, s2, 5));
// }
