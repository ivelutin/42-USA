# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/18 16:09:23 by ivelutin          #+#    #+#              #
#    Updated: 2017/06/06 00:43:18 by ivelutin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Name of the program
NAME = printf
# Compiling flags
FLAGS = -Wall -Wextra -Werror -g
# Folders
SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./includes/
LIBFT_DIR = ./Libft/

# Source files and object files
SRC_FILES = ft_printf.c ft_conv.c ft_flags.c ft_id.c ft_s.c
OBJ_FILES = $(SRC_FILES:.c=.o)
# Paths
SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))
LIBFT = $(addprefix $(LIBFT_DIR), libft.a)

# Libft and Minilibx linkers
LNK  = $(LIBFT)

# all rule
all: obj $(LIBFT) $(NAME)
obj:
	@mkdir -p $(OBJ_DIR)
$(OBJ_DIR)%.o:$(SRC_DIR)%.c
	@gcc $(FLAGS) -I $(LIBFT_DIR) -I $(INC_DIR) -o $@ -c $<
$(LIBFT):
	@make -C $(LIBFT_DIR)

# Compiling
$(NAME): $(OBJ)
	@echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compiling... Wait a sec."
	@gcc $(OBJ) $(LNK) -lm -o $(NAME)
	@echo "(•̀ᴗ•́)و $(NAME) generated!"
# clean rule
clean:
	@rm -Rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean
	@echo "¯\_(ツ)_/¯ Objects removed!"
# fclean rule
fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@echo "(╯°□°）╯︵ ┻━┻ $(NAME) removed!"
# re rule
re: fclean all
# phony
.PHONY: all clean fclean re obj
