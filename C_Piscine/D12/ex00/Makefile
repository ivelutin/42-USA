# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 23:04:57 by ivelutin          #+#    #+#              #
#    Updated: 2016/11/09 23:05:01 by ivelutin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		ft_display_file

SRC = 		ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) ft_display_file.o

clean:
	/bin/rm -f ft_display_file.o

fclean:
	/bin/rm -f ft_display_file.o $(NAME)
