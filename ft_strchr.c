/* ****************************************************************************** */
/*                                                                                */
/*   libft: ft_strchr                                         :::      ::::::::   */
/*                                                          :+:      :+:    :+:   */
/*   Instructions:                                        +:+ +:+         +:+     */
/*                                                      +#+  +:+       +#+        */
/*   Reproduce the behavior of the function strchr    +#+#+#+#+#+   +#+           */
/*     (man strchr).                                       #+#    #+#             */
/*                                                        ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

// strchr() searches for the first occurrence of the character c
//	 (an unsigned char) in the string pointed to by the argument str.
// Returns a pointer to the first occurrence of the character c the
//	 string str, or NULL if the character is not found.
// strchr() = defined in string.h
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*found;
	int		len;

	len = ft_strlen(str) + 1;
	i = 0;
	found = (char *)str;
	while (len--)
	{
		if (*(found + i) == (unsigned char)c)
			return (found + i);
		++i;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
//
// int main(void)
// {
// 	const char	*str = "https://www.42kl.com";
// 	char c = '.';
// 	char	*return_ctrl;
// 	char	*return_test;
//
// 	printf("\nOri: %s\n\n", str);
// 	return_ctrl = strchr(str, (char)c);
// 	printf("Control (strchr): %s\n", return_ctrl);
// 	return_test = ft_strchr(str, (char)c);
// 	printf("Test (ft_strchr): %s\n", return_test);
//     return (0);
// }
// Parameters
// str - This is the C string to be scanned.
// c   - This is the character to be searched in str.