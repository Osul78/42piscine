/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:24:41 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/05 13:42:13 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str > 47 && *str < 58))
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
//     char *teste1 = "dawfawadadawd";
//     printf("Teste1: %d\n", ft_str_is_numeric(teste1));
// }
