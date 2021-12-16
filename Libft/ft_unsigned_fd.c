/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:13:19 by joaopere          #+#    #+#             */
/*   Updated: 2021/12/04 15:13:21 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_unsigned_fd(unsigned int n)
{
	static int	c;
	static int	i;

	i = n;
	if (!c)
	{
		c = 0;
	}
	if (i > 9)
	{
		ft_unsigned_fd(i / 10);
	}
	ft_putchar_fd((i % 10) + '0', 1);
	c++;
	if (n == 0)
	{
		return (1);
	}
	return (c);
}
