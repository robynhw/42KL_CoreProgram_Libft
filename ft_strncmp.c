/* ****************************************************************************** */
/*                                                                                */
/*   libft: ft_strncmp                                        :::      ::::::::   */
/*                                                          :+:      :+:    :+:   */
/*   Instructions:                                        +:+ +:+         +:+     */
/*                                                      +#+  +:+       +#+        */
/*   Reproduce the behavior of the function strncmp   +#+#+#+#+#+   +#+           */
/*     (man strncmp).                                      #+#    #+#             */
/*                                                        ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

// strncmp() compares at most the first n bytes of str1 and str2.
//	 (an unsigned char) in the string pointed to by the argument str.
// Returns an integer (representing the difference of s1 - s2).
// Parameters:
// str1 - This is the first string to be compared.
// str2 - This is the second string to be compared.
// n    − The maximum number of characters to be compared.
// strncmp() = defined in string.h
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	c_s1 = (unsigned char *) s1;
	c_s2 = (unsigned char *) s2;
	i = 0;
	while ((i < n) && (c_s1[i] != '\0' || c_s2[i] != '\0'))
	{	
		if (c_s1[i] != c_s2[i])
			return (c_s1[i] - c_s2[i]);
		++i;
	}
	return (0);
}
// #include <stdio.h>
//
// int	main(void)
// {
// 	char	*string1;
// 	char	*string2;
//
// 	string1 = "AbCD";
// 	string2 = "ABeAqwerty";
// 	printf("String1 - String2 = %d\n", ft_strncmp(string1, string2, 2));
// 	return (0);
// }
// n	 - The maximum number of characters to be compared.
//
// Return Value
// 1. Return value < 0 then it indicates str1 is less than str2.
// 2. Return value > 0 then it indicates str2 is less than str1.
// 3. Return value = 0 then it indicates str1 is equal to str2.
