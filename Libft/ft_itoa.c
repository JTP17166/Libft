/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:47:29 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 17:15:03 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	if (n <= 0)
	{
		n = -n;
		len = 1;
	}
	else
		len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_intlen(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	ptr[len] = '\0';
	while (n > 0)
	{
		ptr[len - 1] = ((n % 10) + '0');
		n /= 10;
		len--;
	}
	return (ptr);
}

/*
* L15 -> ft_intlen -- find the length of an integer.
* L34 -> Allocates (with malloc(3)) and returns a string 
* representing the integer received as an argument.
* Negative numbers must be handled.
* L40 -> strdup -- save a copy of a string.
* L42 -> strdup -- save a copy of a string.
* L43 -> ft_intlen -- find the length of an integer.
*/
