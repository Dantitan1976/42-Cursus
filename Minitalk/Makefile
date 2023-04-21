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
NAME_SERVIDOR_BONUS = server_bonus
NAME_CLIENTE_BONUS = client_bonus

SRC_SERVER =	./src/server.c
SRC_CLIENT = 	./src/client.c
SRC_SERVER_BONUS = ./src/server_bonus.c 
SRC_CLIENT_BONUS = ./src/client_bonus.c

OBJS_SERVER = $(SRC_SERVER:.c=.o)
OBJS_CLIENT = $(SRC_CLIENT:.c=.o)
OBJS_SERVER_BONUS = $(SRC_SERVER_BONUS:.c=.o)
OBJS_CLIENT_BONUS = $(SRC_CLIENT_BONUS:.c=.o)

#Compilacion#
LIBRERIA = libft/libft.a

AR = ar -rcs

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

#Reglas#

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: libft compilar

norminette:
	@echo "\n ****** NORMINETTE DE 42 ******\n"
	@norminette .

libft:
	@echo "\n ***** COMPILANDO LIBRERIA *****\n"
	@make -C libft

compilar: $(NAME_SERVIDOR) $(NAME_CLIENTE)

compilar_bonus: $(NAME_SERVIDOR_BONUS) $(NAME_CLIENTE_BONUS)

bonus: libft compilar_bonus

$(NAME_SERVIDOR): $(OBJS_SERVER)
	@echo "\n ****** COMPILANDO PROGRAMA SERVIDOR *****\n"
	$(CC) $(CFLAGS) $(OBJS_SERVER) $(LIBRERIA) -o $(NAME_SERVIDOR)

$(NAME_CLIENTE): $(OBJS_CLIENT)
	@echo "\n ****** COMPILANDO PROGRAMA CLIENTE ******\n"
	$(CC) $(CFLAGS) $(OBJS_CLIENT) $(LIBRERIA) -o $(NAME_CLIENTE)

$(NAME_SERVIDOR_BONUS): $(OBJS_SERVER_BONUS)
	@echo "\n ****** COMPILANDO PROGRAMA SERVIDOR BONUS ******\n"
	$(CC) $(CFLAGS) $(OBJS_SERVER_BONUS) $(LIBRERIA) -o $(NAME_SERVIDOR_BONUS)

$(NAME_CLIENTE_BONUS): $(OBJS_CLIENT_BONUS)
	@echo "\n ****** COMPILANDO PROGRAMA CLIENTE BONUS ******\n"
	$(CC) $(CFLAGS) $(OBJS_CLIENT_BONUS) $(LIBRERIA) -o $(NAME_CLIENTE_BONUS)

clean:
	make clean -C libft
	$(RM) $(OBJS_CLIENT) $(OBJS_SERVER) $(OBJS_CLIENT_BONUS) $(OBJS_SERVER_BONUS)

fclean: clean
	make fclean -C libft
	$(RM) $(NAME_CLIENTE) $(NAME_SERVIDOR) $(NAME_CLIENTE_BONUS) $(NAME_SERVIDOR_BONUS)

re: fclean all

.PHONY: all norminette libft compilar compilar_bonus bonus clean fclean re