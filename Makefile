# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 10:26:34 by kmahdi            #+#    #+#              #
#    Updated: 2022/11/23 22:58:47 by kmahdi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRCS =	ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c ft_printf.c ft_hex.c ft_print_check.c ft_hexa_u.c	ft_unsg.c \

OBJS = $(SRCS:.c=.o)

$(RM) = rm -f 


all: $(NAME)

$(NAME): $(OBJS)
		ar -rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all