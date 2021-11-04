/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:49:23 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:41:45 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Locate character in string.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p)
	{
		if (*p == (char)c)
			return (p);
		p++;
	}
	if (c == 0 && *p == 0)
		return (p);
	return (NULL);
}

/*
* L17 -> The strchr() function locates
* the first occurrence of C (converted to a char)
* in the string pointed to by S.
*/
