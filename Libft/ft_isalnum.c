/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:16:20 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:20:39 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Alphanumeric character test

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
* L16 -> The isalnum() function tests for any character for which isalpha(3) or
* isdigit(3) is true.  The value of the argument must be representable as an
* unsigned char or the value of EOF.
*/
