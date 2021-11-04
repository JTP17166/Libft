/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:37:50 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:28:39 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write zeroes to a byte string

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		*tmp = 0;
		tmp++;
		n--;
	}
	return ;
}

/*
* L17 -> The bzero() function writes n zeroes bytes to the string s.
* If n is zero, bzero() does nothing.
*/
