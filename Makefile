CC	= cc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -rf
NAME	= libft
OBJS	= ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o
	ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o
	ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o
	ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o

all: $(NAME) clean

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all
