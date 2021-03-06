/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao_pereira <joao_pereira@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:29:56 by joaopere          #+#    #+#             */
/*   Updated: 2021/12/15 12:56:59 by joao_pereir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_arg_check(char z, va_list args)
{
	if(z == 'c')
	{
		return(ft_putchar(va_args(args, int)));
	}
	else if(z == 's')
	{
		return(ft_putstr(va_args(args, char *)));
	}
	else if(z == 'p')
	{
		return(ft_p(va_args(args, unsigned long)));
	}
	else if(z == 'd')
	{
		return(ft_putnbr_fd(va_args(args, int)));
	}
	else if(z == 'i')
	{
		return(ft_putnbr_fd(va_args(args, int)));
	}
	else if(z == 'u')
	{
		return(ft_unsigned_fd(va_args(args, unsigned int)));
	}
	else if(z == 'x')
	{
		return(ft_hex_lower(va_args(args, size_t), z));
	}
	else if(z == 'X')
	{
		return(ft_hex_upper(va_args(args, size_t), z));
	}
	else if(z == '%')
	{
		return(ft_putchar_fd('%'));
	}
	return(0);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int	count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while(format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += ft_putchar_fd(format[i]);
			i++;
		}
		if (format[i] == '%')
		{
			i++;
			count += ft_arg_check(args, &format[i]);
			i++;
		}
		va_end(args);
	}
	return(count);
}
