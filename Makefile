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
SRC = $(shell find . -name "*.c")
OBJ = $(shell find . -name "*.o")
NAME = Mealy

FLAGS = -Wall -Werror -Wextra

LINUX = $(FLAGS) -lmlx -lXext -lX11
MAC = $(FLAGS) -lmlx -framework OpenGL -framework AppKit

LIB = libft/libft.a
GRAF = graf/libgraf.a
MLX = mlx/libgraphics_mlx.a
ASCII = ascii/libkey_code.a
MINI = minimizare/libmini.a

FLIB = -I libft -L libft -lft
FGRAF = -I graf -L graf -lgraf
FMLX = -I mlx -L mlx -lgraphics_mlx
FASCII = -I ascii -L ascii -lkey_code
FMINI = -I minimizare -L minimizare -lmini
# Mac Linux
all: $(LIB) $(GRAF) $(MLX) $(ASCII) $(MINI)

$(LIB):
	make -C libft re

$(GRAF):
	make -C graf re

$(MLX):
	make -C mlx re

$(ASCII):
	make -C ascii re

$(MINI):
	make -C minimizare re

clean:
	@rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

Mac: re
	@gcc $(MAC) $(SRC) $(FLIB) $(FGRAF) $(FMLX) $(FASCII) $(FMINI) -I . -o $(NAME)

Linux: re
	@gcc $(SRC) -o $(NAME) -I . $(FLIB) $(FGRAF) $(FMLX) $(FASCII) $(FMINI) $(LINUX) -lm
	
#test: $(LIB) #$(GR)
#	@gcc $(FLAGS) test.c -I libft -L libft -lft -I gnl -I .

# -I cauta header
# -L cauta biblioteci
# -lft include biblioteca  l = lib
# -I . cauta header in directorul curent
# -c fisiere .o
