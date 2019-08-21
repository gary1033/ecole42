# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 10:57:45 by ruchang           #+#    #+#              #
#    Updated: 2019/08/19 15:23:24 by ruchang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : fclean clean re all

NAME = libft.a
SRC = src/ft_putchar.c src/ft_putstr.c src/ft_strcmp.c \
	  src/ft_strlen.c src/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
DIR = includes

all :make_lib


	
make_lib :	
	gcc -I $(DIR) -c $(SRC)
	ar rv $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	-rm $(OBJ)	

fclean : clean
	-rm $(NAME)

re : fclean all 
