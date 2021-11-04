/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:19:48 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:50:05 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Locate a substring in a string

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len2;

	len2 = ft_strlen(needle);
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack != '\0' && len-- >= len2)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, len2) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

/* 
* L17 -> The strnstr() function locates the first 
* occurrence of the null-terminated string NEEDLE 
* in the null-terminated string NEEDLE in the 
* string HAYSTACK, where not more than LEN 
* characters are searched.
* L21 -> strlen, strnlen -- find length of string.
* L28 -> strcmp, strncmp -- compare strings.
*/
