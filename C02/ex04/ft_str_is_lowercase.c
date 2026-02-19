/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:56:43 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/05 13:45:02 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 97 || *str > 122)
		{
			return (0);
		}
		else
		{
			str++;
		}
	}
	return (1);
}

// int main(void)
// {
//     char *teste1 = "";
//     printf("teste1: %d\n", ft_str_is_lowercase(teste1));
// }
