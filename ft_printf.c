/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:08:04 by anmendes          #+#    #+#             */
/*   Updated: 2024/11/12 16:32:06 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_format(const char format, va_list args);

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			i += ft_format(*format, args);
		}
		else
			i += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (i);
}

int	ft_format(const char format, va_list args)
{
	int	i;

	i = 0;
	if (format == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (format == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		i += ft_putnbr_p(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		i += ft_putnbr(va_arg(args, unsigned int));
	else if (format == 'u')
		i += ft_putnbr_u(va_arg(args, unsigned int));
	else if (format == 'x')
		i += ft_putnbr_x(va_arg(args, unsigned int));
	else if (format == 'X')
		i += ft_putnbr_xx(va_arg(args, unsigned int));
	else if (format == '%')
		i += ft_putchar('%');
	return (i);
}
