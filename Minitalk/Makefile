# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 21:44:20 by dramirez          #+#    #+#              #
#    Updated: 2023/04/14 21:44:20 by dramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVIDOR = server
NAME_CLIENTE = client

SRC_SERVER =	./src/server.c
SRC_CLIENT = 	./src/client.c 

OBJS_SERVER = $(SRC_SERVER:.c=.o)
OBJS_CLIENT = $(SRC_CLIENT:.c=.o)

#Compilacion#
LIBRERIA = libft/libft.a

AR = ar -rcs

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

#Reglas#

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: norminette libft compilar

norminette:
	@echo "\n ****** NORMINETTE DE 42 ******\n"
	@norminette .

libft:
	@echo "\n ***** COMPILANDO LIBRERIA *****\n"
	@make -C libft

compilar: $(NAME_SERVIDOR) $(NAME_CLIENTE)

$(NAME_SERVIDOR): $(OBJS_SERVER)
	@echo "\n ****** COMPILANDO PROGRAMA SERVIDOR *****\n"
	$(CC) $(CFLAGS) $(OBJS_SERVER) $(LIBRERIA) -o $(NAME_SERVIDOR)

$(NAME_CLIENTE): $(OBJS_CLIENT)
	@echo "\n ****** COMPILANDO PROGRAMA CLIENTE ******\n"
	$(CC) $(CFLAGS) $(OBJS_CLIENT) $(LIBRERIA) -o $(NAME_CLIENTE)

clean:
	make clean -C libft
	$(RM) $(OBJS_CLIENT) $(OBJS_SERVER)

fclean: clean
	make fclean -C libft
	$(RM) $(NAME_CLIENTE) $(NAME_SERVIDOR)

re: fclean all

.PHONY: all norminette libft compilar clean fclean re