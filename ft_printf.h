/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:33:41 by anmendes          #+#    #+#             */
/*   Updated: 2024/11/12 15:21:50 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);
int	ft_putnbr_x(unsigned int nbr);
int	ft_putnbr_xx(unsigned int nbr);
int	ft_putnbr_u(unsigned int nbr);
int	ft_putnbr_p(unsigned long long ptr);

#endif
