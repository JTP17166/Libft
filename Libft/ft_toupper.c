/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:40:12 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:39:20 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Lower case to upper case

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

/*
 * L15 -> The toupper() function converts a lower-case letter 
 * to the corresponding upper-case letter.
 * The argument must be representable as an 
 * unsigned char or the value of EOF.
*/
