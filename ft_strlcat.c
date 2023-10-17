/* ****************************************************************************** */
/*                                                                                */
/*   libft: ft_strlcat                                        :::      ::::::::   */
/*                                                          :+:      :+:    :+:   */
/*   Instructions:                                        +:+ +:+         +:+     */
/*                                                      +#+  +:+       +#+        */
/*   Reproduce the behavior of the function strlcat   +#+#+#+#+#+   +#+           */
/*     (man strlcat).                                      #+#    #+#             */
/*                                                        ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

// strlcat() appends string src to the end of dst.  It will append at most
//	  dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate,
//	  unless dstsize is 0 || the original dst string was longer than dstsize
//	  (in practice this should not happen as it means that either dstsize is
//	  incorrect or that dst is not a proper string).
// It's designed to be safer, more consistent, and
//	  less error prone replacements for strncat().
// Output = total length of the string they tried to create. For strlcat()
//	  it is the initial length of dst plus the length of src.
//
// Unlike strncat(), strlcat() takes the full size of the buffer
//	  (not just the length) and
//	-> guarantees to NUL-terminate the result (as long as
//	   size is larger than 0.
//	-> Note that a byte for the NUL should be included in size.
//	  Also note that strlcat() only operates on true C strings.
//  -> This means that for strlcat() both src and dst must be NUL-terminated.
//
// strlcat() = defined in <string.h>
// size_t = not built-in, defined in <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dst_size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dest);
	if (dest == NULL && dst_size == 0)
		return (src_len);
	if (dst_size <= dst_len || dst_size == 0)
		return (src_len + dst_size);
	dest += dst_len;
	while (i < dst_size - dst_len - 1 && *(src + i))
	{
		dest[i] = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (dst_len + src_len);
}
// dest += dest_len moves the destination pointer (dest) forward
// by dest_len positions.This allows the code to append the
// characters from the source string (src) at the end of the
// existing content in the destination string.

// The subsequent while loop copies characters from the source
// string to the destination string, starting from the updated
// position of dest.

// Overall, dest += dest_len; ensures that the concatenation
// of the source string will begin at the correct position
// in the destination string.
// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	const char	src[] = "Source";
// 	char	dest[100] = "Dest";
// 	const char	src2[] = "Source";
// 	char	dest2[100] = "Dest";
//
// 	printf("\nDest shorter than source:\n\n");
//
// 	strlcat(dest, src, 8);
// 	printf("Control: strlcat\n");
// 	printf("Source	: %s\n", src);
// 	printf("Dest	: %lu %s\n\n", strlcat(dest, src, 8), dest);
//
// 	ft_strlcat(dest, src, 8);
// 	printf("Test: ft_strlcat\n");
// 	printf("Source	: %s\n", src);
// 	printf("Dest	: %lu %s\n\n", ft_strlcat(dest, src, 8), dest);
// 	printf("---------------------------\n\n");
//
// 	strlcat(dest2, src2, 10);
// 	printf("Dest longer than source:\n\n");
// 	printf("Control: strlcat\n");
// 	printf("Source	: %s\n", src2);
// 	printf("Dest	: %lu %s\n\n", strlcat(dest2, src2, 10), dest2);
//
// 	ft_strlcat(dest2, src2, 10);
// 	printf("Test: ft_strlcat\n");
// 	printf("Dest longer than source:\n");
// 	printf("Source	: %s\n", src2);
// 	printf("Dest	: %lu %s\n\n", ft_strlcat(dest2, src2, 10), dest2);
//  	return (0);
// }
//
// strlcat() desgined as a safer, more consistent, and less error prone
//	replacements for the easily misused functions strncat().
// 
// Parameters
// dest - Destination string
// src  - Source string.
// size - The size of the destination buffer.