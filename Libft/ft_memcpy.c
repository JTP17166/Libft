/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:09:11 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:30:27 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copy memory area

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = (const char *)src;
	d = (char *)dst;
	while (n-- && s && d)
		*d++ = *s++;
	return (dst);
}

/* 
* L17 -> The memcpy() function copies n bytes from memory area src 
* to memory area dst.
* If dst and src overlap, behavior is undefined.  
* Applications in which dst and src might overlap 
* should use memmove(3) instead.
*/
