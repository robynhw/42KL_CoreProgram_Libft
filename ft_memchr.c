/* ****************************************************************************** */
/*                                                                                */
/*   libft: ft_memchr                                         :::      ::::::::   */
/*                                                          :+:      :+:    :+:   */
/*   Instructions:                                        +:+ +:+         +:+     */
/*                                                      +#+  +:+       +#+        */
/*   Reproduce the behavior of the function memchr    +#+#+#+#+#+   +#+           */
/*     (man memchr).                                       #+#    #+#             */
/*                                                        ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

// memchr() searches for the first occurrence of the character c (an
//	 unsigned char) in the first n bytes of the string pointed to,
//	 by the argument str.
// Returns:
// -  pointer to the matching byte; or
// -  NULL (if the character does not occur in the given memory area)
// Parameters:
// str - This is the pointer to the block of memory where the search is
//		 performed.
// c   - This is the value to be passed as an int, but the function performs a
//		 byte per byte search using the unsigned char conversion of this value.
// n   - This is the number of bytes to be analyzed.
//
// memchr() = defined in string.h
// size_t = not built-in, defined in <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*found;

	found = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (*(found + i) == (unsigned char)c)
			return (found + i);
		++i;
	}
	found = NULL;
	return (found);
}
// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	const char	*str = "https://www:42kl:com";
// 	char c = '.';
// 	char	*return_ctrl;
// 	char	*return_test;
//
// 	// printf("\nOri: %s\n\n", str);
// 	// return_ctrl = memchr(str, (char)c, 14);
// 	// printf("Control (strchr): %s\n", return_ctrl);
// 	// return_test = ft_memchr(str, (char)c, 14);
// 	// printf("Test (ft_strchr): %s\n", return_test);
//
// 	return_ctrl = ft_memchr(str, 0, 1);
// 	printf("Control (strchr): %s\n", return_ctrl);
// 	return_test = ft_memchr(str, 2, 3); 
// 	printf("Test (ft_strchr): %s\n", return_test);
//	
//     return (0);
// }
