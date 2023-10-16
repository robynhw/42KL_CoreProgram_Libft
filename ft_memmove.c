/* ****************************************************************************** */
/*                                                                                */
/*   libft: ft_memmove                                        :::      ::::::::   */
/*                                                          :+:      :+:    :+:   */
/*   Instructions:                                        +:+ +:+         +:+     */
/*                                                      +#+  +:+       +#+        */
/*   Reproduce the behavior of the function memmove   +#+#+#+#+#+   +#+           */
/*     (man memmove).                                      #+#    #+#             */
/*                                                        ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

// memmove() is used to copy a block of memory from src to dest.
// It's safer approach than memcpy() in the case of overlapping.
// Use memmove() when overlap occurs - copies from the back to front.
//
// **memmove vs memcpy**
// memcpy() simply copies data one by one from one location to another.
// memmove() copies the data first to an intermediate buffer,
// 	 then from the buffer to destination.
// memcpy() leads to problems when strings overlap.
//
// Returns:	- a pointer to dest.
// memmove() = defined in <string.h>
// size_t = not built-in, defined in <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pointer_dest;
	unsigned char	*pointer_src;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	pointer_dest = (unsigned char *) dest;
	pointer_src = (unsigned char *) src;
	i = 0;
	if (pointer_dest > pointer_src)
	{
		while (n-- > 0)
			pointer_dest[n] = pointer_src[n];
	}
	else
	{
		while (i < n)
		{
			pointer_dest[i] = pointer_src[i];
			++i;
		}
	}
	return (pointer_dest);
}
// Parameters
// 	dest - 	pointer to the destination array where the content is to be
// 			 copied, type-casted to a pointer of type void*.
// 	src	- 	pointer to the source of data to be copied, type-casted to
// 			 a pointer of type void*.
// 	n 	- 	number of bytes to be copied.
//
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str1[100] = "HelloWorld";
// 	char str2[100] = "HelloWorld";
// 	printf("\nOri: %s\n", str1);
// 	printf("\nOri: %s\n\n", str2);
//
// 	memmove(str1 + 4, str1, 6 * sizeof(char));
// 	printf("After memmove():\n");
// 	printf("Control (memmove):  %s\n", str1);
//
// 	ft_memmove(str2 + 4, str2, 6 * sizeof(char));
// 	printf("Test (ft_memmove):  %s\n\n", str2);
// 	return (0);
// }