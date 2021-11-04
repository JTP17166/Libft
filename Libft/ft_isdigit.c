/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:21:36 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/03 16:19:07 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Decimal-digit character test

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
* L15 -> The isdigit() function tests for a decimal digit character.
* Regardless of locale, this includes the following characters
* only: (0 to 9).
*/
