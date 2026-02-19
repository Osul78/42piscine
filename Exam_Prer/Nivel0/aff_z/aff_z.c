/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrcard <andrcard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:20:14 by andrcard          #+#    #+#             */
/*   Updated: 2026/02/19 13:36:32 by andrcard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions: write

// Write a program that takes a string, and displays the first 'z'
// character it encounters in it, followed by a newline. If there are no
// 'z' characters in the string, the program writes 'z' followed
// by a newline. If the number of parameters is not 1, the program displays
// 'z' followed by a newline.

// Example:

// $> ./aff_z "abc" | cat -e
// z$
// $> ./aff_z "dubO a POIL" | cat -e
// z$
// $> ./aff_z "zaz sent le poney" | cat -e
// z$
// $> ./aff_z | cat -e
// z$

#include <unistd.h>

int	main(int argc, char **argv)
{
	write(1, "z\n", 2);
	return (0);
}
