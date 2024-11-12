/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:11:09 by anmendes          #+#    #+#             */
/*   Updated: 2024/11/12 11:57:30 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	while (*str)
	{
		i += ft_putchar(*str);
		str++;
	}
	return (i);
}
