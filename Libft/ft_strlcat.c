/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:09:40 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:37:44 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Size-bounded string copying and concatenation

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	if (dstsize <= ft_strlen(dst))
	{
		return (dstsize + ft_strlen(src));
	}
	else
	{
		i = ft_strlen(dst);
		j = 0;
		while (src[j] != '\0' && i + 1 < dstsize)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}

/*
 * L17 -> strlcat() appends string src to the end of dst.
 * It will append at most dstsize - strlen(dst) - 1 characters.
 * It will then NUL-terminate, unless dstsize is 0 
 * or the original dst string was longer than dstsize 
 * (in practice this should not happen as it means that either
 * dstsize is incorrect or that dst is not a proper string).
 * L22 -> strlen, strnlen -- find length of string
 * L28 ->  strlen, strnlen -- find length of string
 * L38 ->  strlen, strnlen -- find length of string
*/
