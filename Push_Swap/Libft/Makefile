# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dramirez <dramirez@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 20:31:32 by dramirez          #+#    #+#              #
#    Updated: 2023/02/20 21:45:07 by dramirez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBFT =		Libft/ft_isalpha.c \
			Libft/ft_isdigit.c \
			Libft/ft_isalnum.c \
			Libft/ft_isascii.c \
			Libft/ft_isprint.c \
			Libft/ft_strlen.c \
			Libft/ft_memset.c \
			Libft/ft_bzero.c \
			Libft/ft_memcpy.c \
			Libft/ft_memmove.c \
			Libft/ft_strlcpy.c \
			Libft/ft_strlcat.c \
			Libft/ft_toupper.c \
			Libft/ft_tolower.c \
			Libft/ft_strchr.c \
			Libft/ft_strrchr.c \
			Libft/ft_strncmp.c \
			Libft/ft_memchr.c \
			Libft/ft_memcmp.c \
			Libft/ft_strnstr.c \
			Libft/ft_atoi.c \
			Libft/ft_calloc.c \
			Libft/ft_strdup.c \
			Libft/ft_substr.c \
			Libft/ft_strjoin.c \
			Libft/ft_strtrim.c \
			Libft/ft_split.c \
			Libft/ft_itoa.c \
			Libft/ft_strmapi.c \
			Libft/ft_striteri.c \
			Libft/ft_putchar_fd.c \
			Libft/ft_putstr_fd.c \
			Libft/ft_putendl_fd.c \
			Libft/ft_putnbr_fd.c \
			Libft/ft_lstnew_bonus.c \
			Libft/ft_lstadd_front_bonus.c \
			Libft/ft_lstsize_bonus.c \
			Libft/ft_lstlast_bonus.c \
			Libft/ft_lstadd_back_bonus.c \
			Libft/ft_lstdelone_bonus.c \
			Libft/ft_lstclear_bonus.c \
			Libft/ft_lstiter_bonus.c \
			Libft/ft_lstmap_bonus.c

PRINTF=		Printf/ft_printf.c \
			Printf/ft_putchar.c \
			Printf/ft_putstr.c \
			Printf/ft_numberlen.c \
			Printf/ft_itoa_printf.c \
			Printf/ft_putnbr.c \
			Printf/ft_basenum.c \
			Printf/ft_numachar.c \
			Printf/ft_unsigned.c \
			Printf/ft_hexad.c \
			Printf/ft_putpuntero.c \

GNL=		Get_Next_Line/get_next_line_bonus.c \
			Get_Next_Line/get_next_line_utils_bonus.c \
			Get_Next_Line/get_next_line_utils.c \
			Get_Next_Line/get_next_line.c \

OBJS_LIBFT = $(LIBFT:.c=.o)

OBJS_PRINTF = $(PRINTF:.c=.o)

OBJS_GNL = $(GNL:.c=.o)

AR = ar -rcs

#Compilador
CC = gcc

#Flags del compilador
CFLAGS = -Wall -Werror -Wextra

#Variable del clean
RM = rm -f

#Funcion principal
all: $(NAME)

#Compilamos la libreria
$(NAME): $(OBJS_LIBFT) $(OBJS_PRINTF) $(OBJS_GNL)
	$(AR) $(NAME) $(OBJS_LIBFT) $(OBJS_PRINTF) $(OBJS_GNL)

#Borramos los objetos que no necesitamos
clean:
	$(RM) $(OBJS_LIBFT) $(OBJS_PRINTF) $(OBJS_GNL)

fclean: clean
		$(RM) $(NAME)

re: fclean all

#Le decimos que no cree ningun archivo con esos nombres
.PHONY: all clean fclean re
