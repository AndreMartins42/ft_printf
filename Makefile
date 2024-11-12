# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 12:07:11 by anmendes          #+#    #+#              #
#    Updated: 2024/11/12 15:32:32 by anmendes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libftprintf.a

SOURCES = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putnbr_x.c\
ft_putnbr_xx.c ft_putnbr_u.c ft_putnbr_p.c 
OBJ = $(SOURCES:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
