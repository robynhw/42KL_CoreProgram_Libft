/* **************************************************************************** */
/*                                                                              */
/*   libft: ft_isascii                                       :::      ::::::::  */
/*                                                         :+:      :+:    :+:  */
/*   Instructions:                                       +:+ +:+         +:+    */
/*                                                     +#+  +:+       +#+       */
/*   Reproduce the behavior of the function isascii  +#+#+#+#+#+   +#+          */
/*     (man isascii).                                     #+#    #+#            */
/*                                                       ###   ########.fr      */
/*                                                                              */
/* **************************************************************************** */

// isascii() tests if a given character, in the current locale,
//   can be represented as a valid 7–bit US-ASCII character.
// If yes, it returns a non-zero number.
// If no, returns 0.
// isascii() = defined in ctype.h
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
//
// int main(int argc, char **argv)
// {
//     if (argc == 2)
//     {
//         printf("Control: isascii(%c) can be represented in ASCII (true = 1;
// false = 0): %d\n", *argv[1], isascii((int)(*argv[1])));
//         printf("Test: ft_isascii(%c) can be represented in ASCII (true = 1;
// false = 0): %d\n", *argv[1], ft_isascii((int)(*argv[1])));
//     }
//     return (0);
// }