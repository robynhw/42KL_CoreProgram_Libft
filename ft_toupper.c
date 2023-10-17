/* ****************************************************************************** */
/*                                                                                */
/*   libft: ft_toupper                                        :::      ::::::::   */
/*                                                          :+:      :+:    :+:   */
/*   Instructions:                                        +:+ +:+         +:+     */
/*                                                      +#+  +:+       +#+        */
/*   Reproduce the behavior of the function toupper   +#+#+#+#+#+   +#+           */
/*     (man toupper).                                      #+#    #+#             */
/*                                                        ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

// toupper() converts lowercase alphabet to an uppercase alphabet.
// Returns uppercase alphabet.
// toupper() = defined in ctype.h
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
// #include <stdio.h>
// #include <ctype.h>

// int main(int argc, char **argv)
// {   
//     if (argc == 2)
//     {
// 		char	c;
//		
// 		c = *argv[1];
// 		printf("%c -> %c\n", c, toupper(c));
//     }
//     return (0);
// }