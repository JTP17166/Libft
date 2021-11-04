/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:09:37 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:42:33 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Locate character in string

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	if (c == 0 && *s == 0)
		p = (char *)s;
	return (p);
}

/* 
* L17 -> The strchr() function locates
* the first occurrence of C (converted to a char)
* in the string pointed to by S.
*/
