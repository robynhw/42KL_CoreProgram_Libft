******************************************************************************* */
/*                                                                              */
/*   libft: ft_isalnum                                       :::      ::::::::  */
/*                                                         :+:      :+:    :+:  */
/*   Instructions:                                       +:+ +:+         +:+    */
/*                                                     +#+  +:+       +#+       */
/*   Reproduce the behavior of the function isalnum  +#+#+#+#+#+   +#+          */
/*     (man isalnum).                                     #+#    #+#            */
/*                                                       ###   ########.fr      */
/*                                                                              */
/* **************************************************************************** */

// isalnum() checks whether the argument passed is an alphanumeric character
//   (alphabet or number) or not.
// If the character is alphanumeric, it returns a non-zero number.
// Else (if not alphanumeric), returns 0.
// isalnum() = defined in ctype.h
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
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
//
// 	printf("Control (isalnum): Char %c is a numeric (true = 1; false = 0):
// %d\n", argv[1][0], isalnum((int)argv[1][0]));
// 	printf("Test (ft_isalnum): Char %c is a numeric (true = 1; false = 0):
// 	%d\n", argv [1][0], ft_isalnum((int)argv[1][0]));
// 	}
//     return (0);
// }
