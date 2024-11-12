/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:26:10 by anmendes          #+#    #+#             */
/*   Updated: 2024/11/12 15:33:02 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_xx(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr > 15)
		i += ft_putnbr_xx(nbr / 16);
	if ((nbr % 16) < 10)
		i += ft_putchar((nbr % 16) + '0');
	else
		i += ft_putchar((nbr % 16) - 10 + 'A');
	return (i);
}
