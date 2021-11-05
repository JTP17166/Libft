/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:12:30 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 15:29:36 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*str;

	if ((!s || !f))
		return (0);
	index = 0;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[index] != '\0')
	{
		str[index] = (*f)(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}

/*
* L15 -> Applies the function ’f’ to each character of the string ’s’, 
* and passing its index as first argument to create a new string (with malloc(3))
* resulting from successive applications of ’f’.
* L23 -> strlen -- find length of string
*/
