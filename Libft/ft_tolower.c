/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:46:23 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:40:58 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Upper case to lower case letter conversion

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

/*
 * L15 -> The tolower() function converts an upper-case 
 * letter to the corresponding lower-case letter.
 * The argument must be representable as an unsigned char 
 * or the value of EOF.
*/
