# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 12:54:37 by ivelutin          #+#    #+#              #
#    Updated: 2016/11/07 12:54:42 by ivelutin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
        srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = ft.h

all:  libft.a

libft.a:
	gcc -c -Wall -Werror -Wextra $(FILES) -I includes/$(HEADERS)
	ar rc libft.a $(OBJECTS)
	ranlib libft.a

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f libft.a
