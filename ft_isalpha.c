******************************************************************************* */
/*                                                                              */
/*   libft: ft_isalpha                                       :::      ::::::::  */
/*                                                         :+:      :+:    :+:  */
/*   Instructions:                                       +:+ +:+         +:+    */
/*                                                     +#+  +:+       +#+       */
/*   Reproduce the behavior of the function isalpha  +#+#+#+#+#+   +#+          */
/*     (man isalpha).                                     #+#    #+#            */
/*                                                       ###   ########.fr      */
/*                                                                              */
/* **************************************************************************** */

// isalpha() checks whether a character is an alphabet (a to z and A-Z) or not.
// If the character is an alphabet (lowercase or uppercase), it returns
//  a non-zero number.
// Else (if not alphabet), returns 0.
// isalpha() = defined in ctype.h
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
// 	printf("Control (isalpha): Char %c is an alphabet (true = 1; false = 0):
// %d\n", *argv[1], isalpha((int)argv[1][0]));
// 	printf("Test (ft_isalpha): Char %c is an alphabet (true = 1; false = 0):
// %d\n", *argv[1], ft_isalpha((int)argv[1][0]));
//     }
//     return (0);
// }
// The (int)*(argv[1]) syntax dereferences the pointer argv[1]
//   to get the value it points to
// (which is assumed to be a single character), and then casts
//   that value to an int before passing it as an argument to ft_isalpha()
