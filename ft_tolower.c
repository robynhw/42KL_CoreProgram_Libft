/* ****************************************************************************** */
/*                                                                                */
/*   libft: ft_tolower                                        :::      ::::::::   */
/*                                                          :+:      :+:    :+:   */
/*   Instructions:                                        +:+ +:+         +:+     */
/*                                                      +#+  +:+       +#+        */
/*   Reproduce the behavior of the function tolower   +#+#+#+#+#+   +#+           */
/*     (man tolower).                                      #+#    #+#             */
/*                                                        ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

// tolower() converts an uppercase alphabet to a lowercase character.
// Returns UPPERCASE alphabet.
// tolower() = defined in ctype.h
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
// #include <stdio.h>
// #include <ctype.h>
//
// int main(int argc, char **argv)
// {   
//     if (argc == 2)
//     {
// 		char	c;
//
// 		c = *argv[1];
// 		printf("%c -> %c\n", c, tolower(c));
//     }
//     return (0);
// }