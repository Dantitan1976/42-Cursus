# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramirez <dramirez@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 10:11:21 by dramirez          #+#    #+#              #
#    Updated: 2022/11/06 17:33:03 by dramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombramos al archivo ejecutable
NAME = libft.a

#Variable con los archivos del ejecutable
SRCS =	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_stlcpy.c \
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
	
SRCS_BONUS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

#Variable para determinar nuestros archivos objeto
OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

INCLUIR = libft.h

LIB = ar -rcs

OPCION = -c

#Compilador
CC = gcc

#Flags del compilador
CFLAGS = -Wall -Werror -Wextra

#Variable del clean
RM = rm -f

#Funcion principal
all: $(NAME)

#Compilamos la libreria
$(NAME): $(OBJS) $(INCLUIR)
	$(LIB) $(NAME) $(OBJS)

#Compilamos el bonus
bonus: $(OBJS) $(OBJS_BONUS) $(INCLUIR)
	$(LIB) $(NAME) $(OBJS) $(OBJS_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Borramos los objetos que no necesitamos
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
		$(RM) $(NAME)

re: fclean all bonus

#Le decimos que no cree ningun archivo con esos nombres
.PHONY: bonus all clean fclean re
