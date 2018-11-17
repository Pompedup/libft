# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/12 10:33:17 by mbonati           #+#    #+#              #
#    Updated: 2018/11/17 09:57:35 by abezanni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC = libft.h

SRC = ft_isdigit.c\
ft_memdel.c\
ft_putstr.c\
ft_strequ.c\
ft_strncmp.c\
ft_strtrim.c\
ft_isprint.c\
ft_memmove.c\
ft_putstr_fd.c\
ft_striter.c\
ft_strncpy.c\
ft_tolower.c\
ft_isspace.c\
ft_memset.c\
ft_strcat.c\
ft_striteri.c\
ft_strnequ.c\
ft_toupper.c\
ft_atoi.c\
ft_itoa.c\
ft_putchar.c\
ft_strchr.c\
ft_strjoin.c\
ft_strnew.c\
ft_bzero.c\
ft_memalloc.c\
ft_putchar_fd.c\
ft_strclr.c\
ft_strlcat.c\
ft_strnstr.c\
ft_intsize.c\
ft_memccpy.c\
ft_putendl.c\
ft_strcmp.c\
ft_strlen.c\
ft_strrchr.c\
ft_isalnum.c\
ft_memchr.c\
ft_putendl_fd.c\
ft_strcpy.c\
ft_strmap.c\
ft_strsplit.c\
ft_isalpha.c\
ft_memcmp.c\
ft_putnbr.c\
ft_strdel.c\
ft_strmapi.c\
ft_strstr.c\
ft_isascii.c\
ft_memcpy.c\
ft_putnbr_fd.c\
ft_strdup.c\
ft_strncat.c\
ft_strsub.c\
ft_lstdelone.c\
ft_lstadd.c\
ft_lstnew.c\
ft_lstmap.c\
ft_lstiter.c\
ft_lstdel.c\

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f libft.a

re: fclean all
