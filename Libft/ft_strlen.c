/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:23:16 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:26:08 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Find lenght of string

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
* L17 -> The strlen() function computes the length of the string s. 
* The strnlen() function attempts to compute the length of s, 
* but never scans beyond the first maxlen bytes of s.
*/
