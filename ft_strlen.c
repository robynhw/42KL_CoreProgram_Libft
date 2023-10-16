/* **************************************************************************** */
/*                                                                              */
/*   libft: ft_strlen                                        :::      ::::::::  */
/*                                                         :+:      :+:    :+:  */
/*   Instructions:                                       +:+ +:+         +:+    */
/*                                                     +#+  +:+       +#+       */
/*   Reproduce the behavior of the function strlen   +#+#+#+#+#+   +#+          */
/*     (man strlen).                                      #+#    #+#            */
/*                                                       ###   ########.fr      */
/*                                                                              */
/* **************************************************************************** */

// strlen() computes the length of the string str up to, but
//  not including the terminating null character.
// strlen() = defined in <string.h>
// size_t = not built-in, defined in <stddef.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}
// #include <stdio.h>
// #include <string.h>
//
// int main(int argc, char **argv)
// {
//     if (argc == 2)
//     {
//         printf("\n%s\n \n", argv[1]);
//         printf("Control (strlen): %lu\n", strlen(argv[1]));
//         printf("Test (ft_strlen): %lu\n\n", ft_strlen(argv[1]));
//     }
//     return (0);
// }
// %lu = long unsigned decimal