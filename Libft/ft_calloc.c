/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:18:25 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:52:34 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Memory allocation

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*spc;

	spc = malloc(count * size);
	if (spc == 0)
	{
		return (NULL);
	}
	ft_bzero(spc, size * count);
	return (spc);
}

/* 
* L17 -> The calloc() function contiguously allocates enough space for count 
* objects that are size bytes of memory each and returns a pointer to the allocated memory.  
* The allocated memory is filled with bytes of value zero.
* L21 -> The malloc() function allocates size bytes of memory and returns a pointer 
to the allocated memory.
* L26 -> bzero -- write zeroes to a byte string.
*/
