# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/13 15:09:13 by eurodrig          #+#    #+#              #
#    Updated: 2016/11/16 23:33:47 by ivelutin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FLAGS = -Wall -Wextra -Werror -o

SRCS = ./srcs/*.c

OBJS = ./*.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(NAME)  $(SRCS) -I ./includes

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
