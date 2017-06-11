# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpurci <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/09 19:14:13 by gpurci            #+#    #+#              #
#    Updated: 2017/04/09 19:14:15 by gpurci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
OBJ = *.o
SRC = *.c
NAME = libgraf.a
FLAGS = -Wall -Werror -Wextra -c

LIB = ../libft/libft.a
FLIB = -I ../libft

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ):
	gcc $(FLAGS) $(SRC) $(FLIB)

$(LIB):
	make -C libft re

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
