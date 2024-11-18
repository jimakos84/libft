# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/10 14:39:15 by dvlachos          #+#    #+#              #
#    Updated: 2024/11/18 13:22:59 by dvlachos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c \
	  ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memchr.c \
	  ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c \
	  ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c \
	  ft_strmapi.c ft_strtrim.c ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c \
	  ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c 
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
