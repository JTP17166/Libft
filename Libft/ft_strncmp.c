/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:14:53 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:44:47 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compare strings

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && --n)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (((unsigned char)*s1) - ((unsigned char)*s2));
}

/*
 * L17 -> The strcmp() and strncmp() functions lexicographically compare 
 * the null-termi-nated strings s1 and s2.
*/
