# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 23:18:41 by ivelutin          #+#    #+#              #
#    Updated: 2016/11/09 23:18:43 by ivelutin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = ft_cat

SRC = srcs/aux_fun.c main.c
OBJ = aux_fun.o main.o

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)
	$(CC) $(OBJ) -o $(NAME)

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -f $(NAME)
