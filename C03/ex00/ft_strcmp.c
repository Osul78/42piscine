/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:20:36 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/11 20:59:49 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
//     char *s1 = "ABC";
//     char *s2 = "ABD";

//     printf("teste00: %i", ft_strcmp(s1, s2));
// }
