# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpurci <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/03 14:33:32 by gpurci            #+#    #+#              #
#    Updated: 2017/02/13 19:31:35 by gpurci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#	@gcc $(FLAGS) test.c -I libft -L libft -lft -I gnl -I .

# -I cauta header
# -L cauta biblioteci
# -lft include biblioteca  l = lib
# -I . cauta header in directorul curent
# -c fisiere .o

SRC = $(shell find . -name "*.c")
OBJ = $(shell find . -name "*.o")
NAME = libmini.a
FLAGS = -Wall -Werror -Wextra -c

LIB = ../libft/libft.a
FLIB = -I ../libft

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ):
	gcc $(FLAGS) $(SRC) $(FLIB) -I .

$(LIB):
	make -C libft re

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
