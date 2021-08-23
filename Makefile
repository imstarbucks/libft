# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spencerwongyeongli <spencerwongyeongli@    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/04 22:59:46 by spencerwong       #+#    #+#              #
#    Updated: 2021/07/23 21:12:06 by spencerwong      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c

CC = gcc

FLAGS = -Wall -Wextra -Werror
all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC)
	./a.out

clean:
	rm a.out
