/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:10:49 by anmendes          #+#    #+#             */
/*   Updated: 2024/11/12 15:10:24 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr > 9)
		i += ft_putnbr_u(nbr / 10);
	i += ft_putchar((nbr % 10) + '0');
	return (i);
}
