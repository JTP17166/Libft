/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:47:41 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 17:15:32 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
		{
			front++;
		}
		while (s1[rear - 1] && ft_strchr(set, s1[rear - 1]) && rear > front)
		{
			rear--;
		}
		str = (char *)malloc(sizeof(char) * (rear - front + 1));
		if (str)
		{
			ft_strlcpy(str, &s1[front], rear - front + 1);
		}
	}
	return (str);
}

/* 
* L15 -> Allocates and returns a copy of S1 with the 
* characters specified in SET removed from the beginning 
* and the end of the string.
* L25 -> strlen -- find length of string.
* L26 -> strchr -- locate character in string.
* L30 -> strchr -- locate character in string.
* L37 -> strlcpy -- size-bounded string copying and concatenation.
*/
