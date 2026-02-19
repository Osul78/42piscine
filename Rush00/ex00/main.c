/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:41:03 by andrcard          #+#    #+#             */
/*   Updated: 2026/01/31 12:48:21 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	main(void)
{
	rush(1, 3);
	return (0);
}

// #include <unistd.h>

// void	rush(int x, int y);
// void	rush01(int x, int y);
// void	rush02(int x, int y);
// void	rush03(int x, int y);
// void	rush04(int x, int y);

// int	ft_atoi(char *nbr)
// {
// 	int	sign;
// 	int	num;

// 	num = 0;
// 	sign = 1;
// 	while (*nbr == 32 || (*nbr >= 9 && *nbr <= 13))
// 	{
// 		nbr = nbr + 1;
// 	}
// 	if (*nbr == '+' || *nbr == '-')
// 	{
// 		sign = 44 - *nbr;
// 		nbr = nbr + 1;
// 	}
// 	while (*nbr >= '0' && *nbr <= '9')
// 	{
// 		num = (num * 10) + ((*nbr - '0') * sign);
// 		nbr = nbr + 1;
// 	}
// 	return (num);
// }

// void	select_fig(int x, int y, int type)
// {
// 	if (type == 1)
// 		rush01(x, y);
// 	else if (type == 2)
// 		rush02(x, y);
// 	else if (type == 3)
// 		rush03(x, y);
// 	else if (type == 4)
// 		rush04(x, y);
// 	else
// 		rush(x, y);
// }

// int	main(int argc, char **argv)
// {
// 	int	type;

// 	if (argc < 3 || argc > 4)
// 		return (-1);
// 	type = 0;
// 	if (argc == 4)
// 		type = ft_atoi(argv[3]);
// 	if (type < 0 || type > 4)
// 	{
// 		write(1, "Invalid figure type! (0-4)\n", 27);
// 		return (-1);
// 	}
// 	select_fig(ft_atoi(argv[1]), ft_atoi(argv[2]), type);
// 	return (0);
// }
