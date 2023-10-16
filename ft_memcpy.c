/* ***************************************************************************** */
/*                                                                               */
/*   libft: ft_memcpy                                        :::      ::::::::   */
/*                                                         :+:      :+:    :+:   */
/*   Instructions:                                       +:+ +:+         +:+     */
/*                                                     +#+  +:+       +#+        */
/*   Reproduce the behavior of the function memcpy   +#+#+#+#+#+   +#+           */
/*     (man memcpy).                                      #+#    #+#             */
/*                                                       ###   ########.fr       */
/*                                                                               */
/* ***************************************************************************** */

// memcpy() copies n characters from memory area src to memory area dest.
//  (ie. from source str to dest string).
// memcpy() = defined in <string.h>
// size_t = not built-in, defined in <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*char_cast_dest;
	unsigned char	*char_cast_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	char_cast_dest = (unsigned char *) dest;
	char_cast_src = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		char_cast_dest[i] = char_cast_src[i];
		++i;
	}
	return (char_cast_dest);
}
// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	char	src[] = "HelloWorld";
// 	char	dest[100];
//
// 	memcpy(dest, src, strlen(src) + 1);
//
// 	printf("\nControl (memcpy)\n");
// 	printf("Source	: %s\n", src);
// 	printf("Dest	: %s\n\n", dest);
//
// 	ft_memcpy(dest, src, strlen(src) + 1);
//
// 	printf("Test (ft_memcpy)\nSource	: %s\n", src);
// 	printf("Dest	: %s\n\n", dest);
//
// 	char	*memcpy_ptr = memcpy(dest, src, strlen(src) + 1);
// 	printf("Control: memcpy_ptr	: %p\n", memcpy_ptr);
// 	printf("Test: 	 dest		: %p\n", dest);
//	
//     return (0);
// }
// %lu = long unsigned decimal
// Parameters
// dest		− This is pointer to the destination array where the content
//				is to be copied, type-casted to a pointer of type void*.
// src		- This is pointer to the source of data to be copied, type-casted
//				to a pointer of type void*.
// n		- This is the number of bytes to be copied.
// memcpy() does not check for any terminating null character in source - it
//				always copies exactly num bytes
// must type cast because incomplete type 'void' is not assignable.
//-----
// &&: Returning NULL when both dst and src are NULL in this case indicates
//		that there is an error in the function call because there is no valid
//		memory to copy from or copy to. By requiring both pointers to be NULL
// 		for the error condition, it ensures that the function does not attempt
//		to perform the copy operation with invalid pointers, which could lead
//		to undefined behavior.