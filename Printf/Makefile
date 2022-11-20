# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 16:15:45 by dramirez          #+#    #+#              #
#    Updated: 2022/11/20 19:08:14 by dramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombramos el archivo ejecutable
NAME = libftprintf.a

#Variable con los archivos del ejecutable
SRCS =	ft_putchar.c \
	ft_putstr.c \
	ft_numberlen.c \

#Variable para determinar los archivos objeto
OBJS = $(SRCS:.c=.o)

AR = ar -rcs

#Compliador
CC = gcc

#Flags del compilador
CFAGS = -Wall -Werror -Wextra

#Variable del clean
RM = rm -f

#Funcion principal
all: $(NAME)

#Compilamos la libreria
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

#Borramos los objetos que no necesitamos
clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

#Le decimos que no cree ningun archivo con estos nombres
.PHONY: all bonus clean fclean re
