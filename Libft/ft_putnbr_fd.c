/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 12:31:46 by joaopere          #+#    #+#             */
/*   Updated: 2021/11/30 12:31:48 by joaopere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// if its %d

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

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
