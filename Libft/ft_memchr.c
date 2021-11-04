/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:28:11 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:44:44 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Locate byte in byte string

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}

/* 
* L17 -> The memchr() function locates the first 
* occurrence of C (converted to an unsigned char) in string S.
*/
