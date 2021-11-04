/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:33:40 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:34:26 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Size-bounded string copying and concatenation.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (dstsize != 0)
	{
		while (src[index] != '\0' && index < (dstsize - 1))
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (count);
}

/*
* L17 -> strlcpy() copies up to dstsize - 1 characters 
* from the string src to dst, 
* NUL-terminating the result if dstsize is not 0.
*/
