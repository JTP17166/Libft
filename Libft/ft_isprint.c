/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:09:40 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:24:05 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Printing characters test (space character inclusive).

#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= 32) && (c <= 126));
}

/*
* L17 -> The isprint() function tests for any printing character, including space
* (` ').  The value of the argument must be representable as an unsigned char or
* the value of EOF.
*/
