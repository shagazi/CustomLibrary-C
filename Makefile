# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shagazi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/01 18:30:14 by shagazi           #+#    #+#              #
#    Updated: 2018/03/19 17:12:51 by shagazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

HEADER= libft.h

FLAGS= -Wall -Wextra -Werror

SRCS= ft_memalloc.c \
	  ft_putendl.c \
	  ft_strcmp.c \
	  ft_strmap.c \
	  ft_strsub.c \
	  ft_memccpy.c \
	  ft_putendl_fd.c \
	  ft_strcount.c \
	  ft_strmapi.c \
	  ft_strtrim.c \
	  ft_atoi.c \
	  ft_memchr.c \
	  ft_puterror_fd.c \
	  ft_strcpy.c \
	  ft_strncat.c \
	  ft_tolower.c \
	  ft_memcmp.c \
	  ft_putnbr.c \
	  ft_strdel.c \
	  ft_strncmp.c \
	  ft_toupper.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_putnbr_fd.c \
	  ft_strdup.c \
	  ft_strncpy.c \
	  ft_isalnum.c \
	  ft_memdel.c \
	  ft_putstr.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_isalpha.c \
	  ft_memmove.c \
	  ft_putstr_fd.c \
	  ft_striter.c \
	  ft_strnew.c \
	  ft_isascii.c \
	  ft_memset.c \
	  ft_rmwhitespace.c \
	  ft_striteri.c \
	  ft_strnstr.c \
	  ft_isdigit.c \
	  ft_strcat.c \
	  ft_strjoin.c \
	  ft_strrchr.c \
	  ft_isprint.c \
	  ft_putchar.c \
	  ft_strchr.c \
	  ft_strlcat.c \
	  ft_strsplit.c \
	  ft_itoa.c \
	  ft_putchar_fd.c \
	  ft_strclr.c \
	  ft_strlen.c \
	  ft_strstr.c \
	  ft_strsubncmp.c \
	  ft_spacecheck.c \
	  ft_str.c \
	  ft_strcount.c \
	  ft_memdup.c \
	  ft_lstadd.c \
	  ft_lstnew.c \
	  ft_lstdel.c \
	  ft_lstiter.c \
	  ft_lstdelone.c \
	  ft_lstmap.c \

OBJS= ft_memalloc.o \
	  ft_putendl.o \
	  ft_strcmp.o \
	  ft_strmap.o \
	  ft_strsub.o \
	  ft_memccpy.o \
	  ft_putendl_fd.o \
	  ft_strcount.o \
	  ft_strmapi.o \
	  ft_strtrim.o \
	  ft_atoi.o \
	  ft_memchr.o \
	  ft_puterror_fd.o \
	  ft_strcpy.o \
	  ft_strncat.o \
	  ft_tolower.o \
	  ft_memcmp.o \
	  ft_putnbr.o \
	  ft_strdel.o \
	  ft_strncmp.o \
	  ft_toupper.o \
	  ft_bzero.o \
	  ft_memcpy.o \
	  ft_putnbr_fd.o \
	  ft_strdup.o \
	  ft_strncpy.o \
	  ft_isalnum.o \
	  ft_memdel.o \
	  ft_putstr.o \
	  ft_strequ.o \
	  ft_strnequ.o \
	  ft_isalpha.o \
	  ft_memmove.o \
	  ft_putstr_fd.o \
	  ft_striter.o \
	  ft_strnew.o \
	  ft_isascii.o \
	  ft_memset.o \
	  ft_rmwhitespace.o \
	  ft_striteri.o \
	  ft_strnstr.o \
	  ft_isdigit.o \
	  ft_strcat.o \
	  ft_strjoin.o \
	  ft_strrchr.o \
	  ft_isprint.o \
	  ft_putchar.o \
	  ft_strchr.o \
	  ft_strlcat.o \
	  ft_strsplit.o \
	  ft_itoa.o \
	  ft_putchar_fd.o \
	  ft_strclr.o \
	  ft_strlen.o \
	  ft_strstr.o \
	  ft_strsubncmp.o \
	  ft_spacecheck.o \
	  ft_str.o \
	  ft_strcount.o \
	  ft_memdup.o \
	  ft_lstadd.o \
	  ft_lstnew.o \
	  ft_lstdel.o \
	  ft_lstiter.o \
	  ft_lstdelone.o \
	  ft_lstmap.o \


all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
