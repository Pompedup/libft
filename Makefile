# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 17:32:49 by abezanni          #+#    #+#              #
#    Updated: 2018/12/02 16:48:40 by abezanni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHAR =		ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_islower.c\
			ft_isprint.c\
			ft_isspace.c\
			ft_isupper.c\
			ft_tolower.c\
			ft_toupper.c\

FILE =		get_next_line.c\

FT_PRINTF =	apply_flags.c\
			ft_printf.c\
			get_flags.c\
			get_numbers.c\
			get_strings.c\
			process_format.c\

LIST =		ft_listadd.c\
			ft_listdel.c\
			ft_listdelone.c\
			ft_listiter.c\
			ft_listmap.c\
			ft_listnew.c\
			ft_listpushback.c\
			ft_listremoveone.c\

LST =		ft_lstadd.c\
			ft_lstdelone.c\
			ft_lstiter.c\
			ft_lstnew.c\
			ft_lstpushback.c\
			ft_lstremoveone.c\

MEMORY =	ft_bzero.c\
			ft_memalloc.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memdel.c\
			ft_memjoin.c\
			ft_memmove.c\
			ft_memrev.c\
			ft_memset.c\
			ft_print_memory.c\

NUM =		ft_abs.c\
			ft_atoi.c\
			ft_biggest.c\
			ft_getnbr.c\
			ft_int_tab_cmp.c\
			ft_iterative_power.c\
			ft_itoa.c\
			ft_lltoa_base.c\
			ft_nbrlen.c\
			ft_smallest.c\
			ft_sqrt.c\
			ft_uitoa_base.c\
			ft_ulltoa_base.c\

PRINT =		ft_putchar_fd.c\
			ft_putchar.c\
			ft_putendl_fd.c\
			ft_putendl.c\
			ft_putnbr_fd.c\
			ft_putnbr.c\
			ft_putnbrendl.c\
			ft_putstr_fd.c\
			ft_putstr.c\

STR =		ft_nbr_words_charset.c\
			ft_split_charset.c\
			ft_stpcpy.c\
			ft_stpncpy.c\
			ft_strcat.c\
			ft_strchr.c\
			ft_strchrs.c\
			ft_strclr.c\
			ft_strcmp.c\
			ft_strcpy.c\
			ft_strdel.c\
			ft_strdup.c\
			ft_strendstr.c\
			ft_strequ.c\
			ft_strisall.c\
			ft_strisint.c\
			ft_strisuint.c\
			ft_striter.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlen.c\
			ft_strmap.c\
			ft_strmapi.c\
			ft_strmjoin.c\
			ft_strnbrlen.c\
			ft_strncat.c\
			ft_strnchr.c\
			ft_strncmp.c\
			ft_strncpy.c\
			ft_strndup.c\
			ft_strnequ.c\
			ft_strnew.c\
			ft_strnewset.c\
			ft_strnis.c\
			ft_strnstr.c\
			ft_strposchr.c\
			ft_strposchrs.c\
			ft_strrev.c\
			ft_strrchr.c\
			ft_strsplit.c\
			ft_strstr.c\
			ft_strstrtochar.c\
			ft_strsub.c\
			ft_strtrim.c\

SRC_NAME =	$(addprefix char/,$(CHAR))\
			$(addprefix file/,$(FILE))\
			$(addprefix ft_printf/,$(FT_PRINTF))\
			$(addprefix list/,$(LIST))\
			$(addprefix lst/,$(LST))\
			$(addprefix memory/,$(MEMORY))\
			$(addprefix num/,$(NUM))\
			$(addprefix print/,$(PRINT))\
			$(addprefix str/,$(STR))\

SRC =		$(addprefix src/,$(SRC_NAME))\


INC = -I inc/

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra $(INC)

CC = @gcc

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ) inc/libft.h inc/ft_printf.h inc/get_next_line.h inc/struct.h
	@ar rc $(NAME) $(OBJ)
	@echo "\033[1;32mSucced libft.a\033[0m"

clean :
	@/bin/rm -f $(OBJ)
	@echo "\033[1;32mSucced clean of '*.o' from libft.a\033[0m"

fclean : clean
	@/bin/rm -f $(NAME)
	@echo "\033[1;32mSucced clean of libft.a\033[0m"

re : fclean	all
	@echo "\033[1;32mSucced recompilation libft.a\033[0m"
