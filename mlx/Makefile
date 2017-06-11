# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpurci <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/21 17:46:40 by gpurci            #+#    #+#              #
#    Updated: 2017/04/21 17:46:43 by gpurci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = *.o
SRC = *.c
NAME = libgraphics_mlx.a
FLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ):
	gcc $(FLAGS) $(SRC)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
