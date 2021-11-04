/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 11:29:43 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:53:56 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Save a copy of a string.

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	str = malloc((len + 1) * sizeof (char));
	if (!str)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* 
* L17 -> The strdup() function allocates sufficient 
* memory for a copy of the string S1, 
* does the copy, and returns a pointer to it.
* L24 -> strlen -- find length of string.
*/
