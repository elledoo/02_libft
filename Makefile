# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esuslova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 18:44:56 by esuslova          #+#    #+#              #
#    Updated: 2019/04/06 18:28:05 by esuslova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRCS = ft_isspace.c\
	   ft_memset.c\
	   ft_bzero.c\
	   ft_memcpy.c\
	   ft_strcmp.c\
	   ft_strncmp.c\
	   ft_atoi.c\
	   ft_strlen.c\
	   ft_strdup.c\
	   ft_strcpy.c\
	   ft_strncpy.c\
	   ft_strcat.c\
	   ft_strncat.c\
	   ft_strlcat.c\
	   ft_strchr.c\
	   ft_strrchr.c\
	   ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalnum.c\
	   ft_isascii.c\
	   ft_isprint.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_putchar.c\
	   ft_putstr.c\
	   ft_putnbr.c
HDR = libft.h
OBJS = ft_isspace.o\
	   ft_memset.o\
	   ft_bzero.o\
	   ft_memcpy.o\
	   ft_strcmp.o\
	   ft_strncmp.o\
	   ft_atoi.o\
	   ft_strlen.o\
	   ft_strdup.o\
	   ft_strcpy.o\
	   ft_strncpy.o\
	   ft_strcat.o\
	   ft_strncat.o\
	   ft_strlcat.o\
	   ft_strchr.o\
	   ft_strrchr.o\
	   ft_isalpha.o\
	   ft_isdigit.o\
	   ft_isalnum.o\
	   ft_isascii.o\
	   ft_isprint.o\
	   ft_toupper.o\
	   ft_tolower.o\
	   ft_putchar.o\
	   ft_putstr.o\
	   ft_putnbr.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS) -I $(HDR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean 	all

.PHONY: all clean fclean re

