/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:55:59 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:22:14 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Test for ASCII character

int	ft_isascii(int c)
{
	return ((c >= 0) && (c <= 127));
}
/*
* L15 -> The isascii() function tests for an ASCII character, which is any character
* between 0 and octal 0177 inclusive.
*/
