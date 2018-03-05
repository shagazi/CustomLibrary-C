# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shagazi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/01 18:30:14 by shagazi           #+#    #+#              #
#    Updated: 2018/03/01 18:38:15 by shagazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror

SRCS = ft_isascii.c  ft_strcpy.c  ft_strncmp.c \
ft_isdigit.c  ft_strlcat.c ft_strncpy.c ft_strstr.c  ft_atoi.c \
ft_isprint.c ft_strcat.c ft_strlen.c \
 ft_strchr.c ft_isalnum.c \
ft_strnstr.c ft_tolower.c ft_isalpha.c  \
ft_strcmp.c ft_strncat.c ft_strrchr.c ft_toupper.c \

OBJS = ft_isascii.o ft_strcpy.o ft_strncmp.o \
ft_isdigit.o ft_strlcat.o ft_strncpy.o ft_strstr.o ft_atoi.o \
ft_isprint.o ft_strcat.o ft_strlen.o \
ft_strchr.o ft_isalnum.o \
ft_strnstr.o ft_tolower.o ft_isalpha.o \
ft_strcmp.o ft_strncat.o ft_strrchr.o ft_toupper.o \

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
