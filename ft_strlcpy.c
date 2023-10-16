/* ****************************************************************************** */
/*                                                                                */
/*   libft: ft_strlcpy                                        :::      ::::::::   */
/*                                                          :+:      :+:    :+:   */
/*   Instructions:                                        +:+ +:+         +:+     */
/*                                                      +#+  +:+       +#+        */
/*   Reproduce the behavior of the function strlcpy   +#+#+#+#+#+   +#+           */
/*     (man strlcpy).                                      #+#    #+#             */
/*                                                        ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

// strlcpy() copies up to dstsize - 1 characters from the
//	  NUL-terminated string src to dst, NUL-terminating the result.
// It's designed to be safer, more consistent, and
//	  less error prone replacements for strncpy().
// Output = length of src. If return value >= dest_size, output
// 	  string is truncated.
//
// Unlike strncpy(), strlcpy() takes the full size of the buffer
//	  (not just the length) and
//	-> guarantees to NUL-terminate the result (as long as
//	   size is larger than 0.
//	-> Note that a byte for the NUL should be included in size.
//	  Also note that strlcpy() only operates on true C strings.
//  -> This means that for strlcpy() src must be NUL-terminated.
//
// strlcpy() = defined in <string.h>
// size_t = not built-in, defined in <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dst == NULL || src == NULL || dstsize == 0)
		return (src_len);
	else
	{
		if ((src_len + 1) < dstsize)
			ft_memcpy(dst, src, src_len + 1);
		else
			ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
		return (src_len);
	}
}
// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	char	src[] = "HelloWorld";
// 	char	dest[8];
// 	char	src2[] = "HelloWorld";
// 	char	dest2[100];
//
// 	printf("\nDest shorter than source:\n\n");
//
// 	strlcpy(dest, src, 7);
// 	printf("Control: strlcpy\n");
// 	printf("Source	: %s\n", src);
// 	printf("Dest	: %lu %s\n\n", strlcpy(dest, src, 7), dest);
//
// 	ft_strlcpy(dest, src, 7);
// 	printf("Test: ft_strlcpy\n");
// 	printf("Source	: %s\n", src);
// 	printf("Dest	: %lu %s\n\n", ft_strlcpy(dest, src, 7), dest);
// 	printf("---------------------------\n\n");
//
// 	strlcpy(dest2, src2, 10);
// 	printf("Dest longer than source:\n\n");
// 	printf("Control: strlcpy\n");
// 	printf("Source	: %s\n", src2);
// 	printf("Dest	: %lu %s\n\n", strlcpy(dest2, src2, 10), dest2);
//
// 	ft_strlcpy(dest2, src2, 10);
// 	printf("Test: ft_strlcpy\n");
// 	printf("Dest longer than source:\n");
// 	printf("Source	: %s\n", src2);
// 	printf("Dest	: %lu %s\n\n", ft_strlcpy(dest2, src2, 10), dest2);
//
//  return (0);
// }
// strlcpy() desgined as a safer, more consistent, and less error prone
//	replacements for the easily misused functions strncpy().