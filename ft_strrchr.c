/* ****************************************************************************** */
/*                                                                                */
/*   libft: ft_strrchr                                        :::      ::::::::   */
/*                                                          :+:      :+:    :+:   */
/*   Instructions:                                        +:+ +:+         +:+     */
/*                                                      +#+  +:+       +#+        */
/*   Reproduce the behavior of the function strrchr   +#+#+#+#+#+   +#+           */
/*     (man strrchr).                                      #+#    #+#             */
/*                                                        ###   ########.fr       */
/*                                                                                */
/* ****************************************************************************** */

// strrchr() searches for the last occurrence of the character c
//	 (an unsigned char) in the string pointed to by the argument str.
// Returns a pointer to the last occurrence of the character c the
//	 string str, or NULL if the character is not found.
// strrchr() = defined in string.h
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*lfound;

	i = ft_strlen(str) - 1;
	lfound = (char *)str;
	if ((char)c == 0)
		return (&lfound[i + 1]);
	while (i >= 0)
	{
		if (*(lfound + i) == (char)c)
			return (lfound + i);
		i--;
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
// 	return_ctrl = strrchr(str, (char)c);
// 	printf("Control (strrchr): %s\n", return_ctrl);
// 	return_test = ft_strrchr(str, (char)c);
// 	printf("Test (ft_strrchr): %s\n", return_test);
//     return (0);
// }
// Parameters
// str - This is the C string to be scanned.
// c   - This is the character to be searched in str.
// unsigned char = positive int