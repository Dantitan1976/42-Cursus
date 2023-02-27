# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 01:21:23 by dramirez          #+#    #+#              #
#    Updated: 2023/02/27 01:49:54 by dramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =		src/ft_check_int_utils.c \
		src/ft_check_int.c \
		src/ft_check_num_utils.c \
		src/ft_check_num_utils2.c \
		src/ft_check_num.c \
		src/ft_sa.c \
		src/ft_sb.c \
		src/main.c \
		
OSRC = $(SRC:.c=.o)

AR = ar -rcs

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

NAME = push_swap

all: $(NAME)

$(NAME): $(OSRC)
	make -C libft
	cp libft/libft.a .
	$(CC) $(CFLAGS) -o $(NAME) $(OSRC) -lft -L.

clean:
	make clean -C libft
	$(RM) $(OSRC)

fclean: clean
		make fclean -C libft
		$(RM) libft.a
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
