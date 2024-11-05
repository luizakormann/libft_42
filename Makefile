# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 17:11:20 by lukorman          #+#    #+#              #
#    Updated: 2024/11/05 00:13:17 by lukorman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                               configuration                                  #
# **************************************************************************** #

CC	= cc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -rf
NAME	= libft.a

# **************************************************************************** #
#                                   files                                      #
# **************************************************************************** #

SRC_FILES	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS	= $(SRC_FILES:.c=.o)

# **************************************************************************** #
#                              compile commands                                #
# **************************************************************************** #

AR	:= ar -rcs
COMPILE_OBJS	= $(CC) $(CFLAGS) -c $< -o $@
COMPILE_LIB	= $(AR) $(NAME) $(OBJS)

# **************************************************************************** #
#                                  targets                                     #
# **************************************************************************** #

all: $(NAME)

%.o: %.c
	$(COMPILE_OBJS)

$(NAME): $(OBJS)
	$(COMPILE_LIB)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
