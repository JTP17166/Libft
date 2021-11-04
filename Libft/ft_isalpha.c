/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <joaopere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:19:29 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:16:49 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Alphabetic character test

int	ft_isalpha(int car)
{
	if ((car >= 'A' && car <= 'Z') || (car >= 'a' && car <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
* L15 -> The isalpha() function tests for any character for which isupper(3) or
* islower(3) is true.  The value of the argument must be representable as
* an unsigned char or the value of EOF.
*/
