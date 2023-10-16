/* **************************************************************************** */
/*                                                                              */
/*   libft: ft_isprint                                       :::      ::::::::  */
/*                                                         :+:      :+:    :+:  */
/*   Instructions:                                       +:+ +:+         +:+    */
/*                                                     +#+  +:+       +#+       */
/*   Reproduce the behavior of the function isprint  +#+#+#+#+#+   +#+          */
/*     (man isprint).                                     #+#    #+#            */
/*                                                       ###   ########.fr      */
/*                                                                              */
/* **************************************************************************** */

// isprint() checks whether a character is a printable character or not.
// If the character is printable, it returns a non-zero number.
// Else (not printable), it returns 0.
// isprint() = defined in ctype.h
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <ctype.h>
//
// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		char	test;
//
// 		test = '\0';
// 		printf("/nControl (isprint): Char %c is printable (true = 1;
//false = 0): %d\n", *argv[1], isprint((int)(*argv[1])));
// 		printf("Test (ft_isprint): Char %c is printable (true = 1;
//false = 0): %d\n\n", *argv[1], ft_isprint((int)(*argv[1])));
// 		printf("Control (isprint): Char '\\0' is printable (true = 1;
//false = 0): %d\n", isprint(test));
// 		printf("Test (ft_isprint): Char '\\0' is printable (true = 1;
//false = 0): %d\n", ft_isprint(test));
// 	}
// 	return (0);
// }