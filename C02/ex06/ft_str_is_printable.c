/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:56:25 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/05 15:54:58 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 127)
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
//     char *teste1 ="!""#"; // 1
//     char *teste2 ="\t\b\n"; // 0
//     char *teste3 ="""#\b"; // 0
//     char *teste4 =""; // 1

//     printf("teste1: %d", ft_str_is_printable(teste1));
//     printf("teste2: %d", ft_str_is_printable(teste2));
//     printf("teste3: %d", ft_str_is_printable(teste3));
//     printf("teste4: %d", ft_str_is_printable(teste4));
// }
