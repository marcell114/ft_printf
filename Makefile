# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpal <mpal@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 09:21:23 by mpal              #+#    #+#              #
#    Updated: 2023/12/07 14:22:11 by mpal             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INC = libftprintf.h

SRC = main.c ft_printf.c ft_putchar.c ft_putstr.c ft_put_digit.c ft_put_pointer.c

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
