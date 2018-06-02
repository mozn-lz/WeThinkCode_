CC=gcc
FLAGS=-Wall -Wextra -Werror
HEAD=./includes/libft.h
MAIN=main.c
SRC=ft_isalpha.c ft_memccpy.c ft_memmove.c ft_strcat.c ft_strdel.c ft_strlen.c ft_strnew.c ft_toupper.c\
ft_isascii.c	ft_memchr.c	ft_memset.c	ft_strchr.c ft_strdup.c	ft_strnstr.c\
ft_atoi.c ft_isdigit.c ft_memcmp.c	ft_putchar.c	ft_strclr.c	ft_striter.c	ft_strncat.c	ft_strrchr.c\
ft_bzero.c ft_isprint.c ft_memcpy.c	ft_putnbr.c	ft_strcmp.c ft_striteri.c ft_strncmp.c	ft_strstr.c\
ft_isalnum.c ft_memalloc.c	ft_memdel.c	ft_putstr.c	ft_strcpy.c	ft_strlcat.c ft_strncpy.c ft_tolower.c\
RM: rm

NAME=libft.a

OBJ=$(SRC:.c=.o)

	$(CC) $(FLAGS) -c $(HEAD) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)	

re: fclean all

