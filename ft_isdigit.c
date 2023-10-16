******************************************************************************* */
/*                                                                              */
/*   libft: ft_isdigit                                       :::      ::::::::  */
/*                                                         :+:      :+:    :+:  */
/*   Instructions:                                       +:+ +:+         +:+    */
/*                                                     +#+  +:+       +#+       */
/*   Reproduce the behavior of the function isdigit  +#+#+#+#+#+   +#+          */
/*     (man isdigit).                                     #+#    #+#            */
/*                                                       ###   ########.fr      */
/*                                                                              */
/* **************************************************************************** */

// ft_isdigit() is a function used to check whether the input
//    character is a numeric or not.
// If the character is a numeric, it returns a non-zero number.
// Else (if not numeric), returns 0.
// isdigit() = defined in ctype.h
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
//
// int main(int argc, char **argv)
// {
//     if (argc == 2)
//     {
//		printf("Control (isdigit): Char %c is a numeric (true = 1; false = 0):
//  %d\n", argv[1][0], isdigit((int)argv[1][0]));
//		printf("Test (ft_isdigit): Char %c is a numeric (true = 1; false = 0):
//  %d\n", argv [1][0], ft_isdigit((int)argv[1][0]));
//     }
//     return (0);
// }
