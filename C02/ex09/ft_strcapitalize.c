/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 22:09:20 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/05 16:05:59 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		i++;
	}
	return (str);
}

// int main(void)
// {
//char    teste01[] = "ola, tudo? 42palavras quarenta-e-duas; cinquenta+e+um";
//char    teste02[] = "HELLO";

//printf("teste: %s\n", ft_strcapitalize(teste01));
//printf("teste: %s\n", ft_strcapitalize(teste02));
//}
