/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:01:57 by anmendes          #+#    #+#             */
/*   Updated: 2024/11/12 16:48:06 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_x(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr > 15)
		i += ft_putnbr_x(nbr / 16);
	if ((nbr % 16) < 10)
		i += ft_putchar((nbr % 16) + '0');
	else
		i += ft_putchar((nbr % 16) - 10 + 'a');
	return (i);
}
