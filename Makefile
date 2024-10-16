# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 17:11:20 by lukorman          #+#    #+#              #
#    Updated: 2024/10/16 17:43:42 by lukorman         ###   ########.fr        #
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
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
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

all: $(NAME) clean

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
