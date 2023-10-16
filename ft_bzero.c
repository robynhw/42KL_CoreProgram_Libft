/* ***************************************************************************** */
/*                                                                               */
/*   libft: ft_bzero                                         :::      ::::::::   */
/*                                                         :+:      :+:    :+:   */
/*   Instructions:                                       +:+ +:+         +:+     */
/*                                                     +#+  +:+       +#+        */
/*   Reproduce the behavior of the function bzero    +#+#+#+#+#+   +#+           */
/*     (man bzero).                                       #+#    #+#             */
/*                                                       ###   ########.fr       */
/*                                                                               */
/* ***************************************************************************** */

// bzero() sets the first n bytes of the area starting at s
//	 to zero (bytes containing '\0').
// Parameters:
//  s	-	the str that zeros are copied into.
//  n	-	the number of zeros to be copied into the str/
// 			 (# bytes to fill with 0).
// Returns: - None
// bzero() library = <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
