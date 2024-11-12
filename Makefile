# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lukorman <lukorman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 17:11:20 by lukorman          #+#    #+#              #
#    Updated: 2024/11/11 21:32:12 by lukorman         ###   ########.fr        #
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
SRC_BONUS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS_FILES	= $(SRC_FILES:.c=.o)
OBJS_BONUS	= $(SRC_BONUS:.c=.o)
ALL_OBJS	= $(OBJS_FILES) $(OBJS_BONUS)

# **************************************************************************** #
#                              compile commands                                #
# **************************************************************************** #

AR	:= ar -rcs
COMPILE_OBJS	= $(CC) $(CFLAGS) -c $< -o $@
COMPILE_LIB_FILES	= $(AR) $(NAME) $(OBJS_FILES)
COMPILE_LIB_BONUS	= $(AR) $(NAME) $(ALL_OBJS)

# **************************************************************************** #
#                                  targets                                     #
# **************************************************************************** #

all: $(NAME)

%.o: %.c
	$(COMPILE_OBJS)

$(NAME): $(OBJS_FILES)
	$(COMPILE_LIB_FILES)

bonus: $(ALL_OBJS)
	$(COMPILE_LIB_BONUS)

clean:
	$(RM) $(ALL_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
