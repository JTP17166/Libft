/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:33:29 by joaopere          #+#    #+#             */
/*   Updated: 2021/10/29 16:52:04 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	t;

	t = n;
	if (t < 0)
	{
		t *= -1;
		ft_putchar_fd('-', fd);
	}
	if (t > 9)
	{
		ft_putnbr_fd((t / 10), fd);
		ft_putchar_fd((t % 10 + '0'), fd);
	}
	else
	{
		ft_putchar_fd((t + '0'), fd);
	}
}

/* 
* L15 -> Outputs the intenger N to the given file descriptor.
* L23 -> Outputs the character ’c’ to the given file descriptor.
* L27 -> Outputs the integer ’n’ to the given file descriptor.
* L28 -> Outputs the character ’c’ to the given file descriptor.
* L32 -> Outputs the character ’c’ to the given file descriptor.
*/
