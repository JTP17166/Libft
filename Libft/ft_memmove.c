/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:54:35 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:32:55 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copy byte string

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst + len - 1;
	s = (unsigned char *)src + len - 1;
	if ((uintptr_t)src <= (uintptr_t)dst && (uintptr_t)s < (uintptr_t)d)
	{
		while (len--)
			*d-- = *s--;
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}

/*
 * L17 -> The memmove() function copies len 
 * bytes from string src to string dst.  
 * The two strings may overlap; 
 * the copy is always done in a non-destructive manner.
 * L30 -> memcpy -- copy memory area.
*/
