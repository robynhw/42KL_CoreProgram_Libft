/* ***************************************************************************** */
/*                                                                               */
/*   libft: ft_memset                                        :::      ::::::::   */
/*                                                         :+:      :+:    :+:   */
/*   Instructions:                                       +:+ +:+         +:+     */
/*                                                     +#+  +:+       +#+        */
/*   Reproduce the behavior of the function memset   +#+#+#+#+#+   +#+           */
/*     (man memset).                                      #+#    #+#             */
/*                                                       ###   ########.fr       */
/*                                                                               */
/* ***************************************************************************** */

// memset - fills memory with a constant byte
// memset - copies the character c (an unsigned char) to the first n
//	 characters of the string pointed to, by the argument str.
// Parameters:
//  str − 	This is a pointer to the block of memory to fill.
//  c   − 	This is the value to be set. The value is passed as an int, but
//			the function fills the block of memory using the unsigned char
//			conversion of this value.
//  n   − 	This is the number of bytes to be set to the value.
// Returns: - pointer to the memory area str.
// Void pointers cannot be dereferenced. To access the data they point to,
//	 you must cast them to something else.
// memset() library = <string.h>
#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *)str;
	while (i < n)
	{
		*(temp + i) = c;
		++i;
	}
	return (str);
}
// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
//
// void	print_null(char	*str);
//
// int main(void)
// {   
// 	char str[6] = "Hello";
// 	printf("\nOri: %s\n\n", str);
//
// 	memset(str, 0, 5);
// 	printf(" :Control (memset)");
// 	print_null(str);
// 	printf("\n");
//
// 	ft_memset(str, 0, 5);
// 	printf(" :Test (ft_memset)");
// 	print_null(str);
// 	printf("\n");
// 	return (0);
// }
//
// void	print_null(char	*str)
// {
// 	int	i;
//	
// 	i = 0;
// 	while (i < 5)
// 	{
// 		if (str[i] == '\0')
// 		{
// 			str[i] = '?';
// 		}
// 		write(1, &str[i], 1);
// 		++i;
// 	}
// }