/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:03:48 by anmendes          #+#    #+#             */
/*   Updated: 2024/11/12 15:11:07 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_px(unsigned long long nbr);

int	ft_putnbr_p(unsigned long long ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
	{
		i += ft_putstr("(nil)");
		return (i);
	}
	i += ft_putstr("0x");
	i += ft_putnbr_px(ptr);
	return (i);
}

int	ft_putnbr_px(unsigned long long nbr)
{
	int	i;

	i = 0;
	if (nbr > 15)
		i += ft_putnbr_px(nbr / 16);
	if ((nbr % 16) < 10)
		i += ft_putchar((nbr % 16) + '0');
	else
		i += ft_putchar((nbr % 16) - 10 + 'a');
	return (i);
}
