/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:56:39 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/05 13:46:55 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 65 || *str > 90)
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
//     char *teste1 = "DJNADWJA"; // 1
//     char *teste2 = "dmakdmkwamk"; // 0
//     char *teste3 = "dmlwmdkaAFWDA"; // 0
//     char *teste4 = ""; // 1

//     printf("teste1: %d\n", ft_str_is_uppercase(teste1));
//     printf("teste1: %d\n", ft_str_is_uppercase(teste2));
//     printf("teste1: %d\n", ft_str_is_uppercase(teste3));
//     printf("teste1: %d\n", ft_str_is_uppercase(teste4));
// }
