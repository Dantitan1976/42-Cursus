#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 10:11:21 by dramirez          #+#    #+#              #
#    Updated: 2023/02/05 01:38:49 by dramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombramos al archivo ejecutable
#Variable con los archivos del ejecutable
SRCS =	./Libreria/ft_swap.c ./Libreria/ft_sa.c ./Libreria/ft_sb.c \
	./Libreria/ft_isdigit.c ./Libreria/ft_strlen.c
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_basenum.c \
		ft_hexad.c \
		ft_putchar.c \
		ft_numachar.c \
		ft_numberlen.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putpuntero.c \
		ft_unsigned.c \
		ft_swap.c \
	
SRCS_BONUS =	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

#Variable para determinar nuestros archivos objeto
OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

AR = ar -rcs

#Compilador
CC = gcc

#Flags del compilador
CFLAGS = -Wall -Werror -Wextra

#Variable del clean
RM = rm -f

NAME = pushswap.a

#Funcion principal
all: $(NAME)

#Compilamos la libreria
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

#Compilamos el bonus
bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)

#Borramos los objetos que no necesitamos
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

#Le decimos que no cree ningun archivo con esos nombres
.PHONY: all bonus clean fclean re
