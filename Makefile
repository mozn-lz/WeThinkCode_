CC=gcc
FLAGS=-Wall -Wextra -Werror
HEAD=./includes/libft.h
MAIN=main.c
SRC=ft_atoi.c      ft_memcmp.c   ft_strclr.c    ft_strlen.c   ft_strstr.c\
ft_bzero.c     ft_memcpy.c   ft_strcmp.c    ft_strmap.c   ft_strsub.c\
ft_isalnum.c   ft_memdel.c   ft_strcpy.c    ft_strmapi.c  ft_strtrim.c\
ft_isalpha.c   ft_memmove.c  ft_strdel.c    ft_strncat.c  ft_tolower.c\
ft_isascii.c   ft_memset.c   ft_strdup.c    ft_strncmp.c  ft_toupper.c\
ft_isdigit.c   ft_putchar.c  ft_strequ.c    ft_strncpy.c\
ft_isprint.c   ft_putnbr.c   ft_striteri.c  ft_strnequ.c\
ft_memalloc.c  ft_putstr.c   ft_stritr.c    ft_strnew.c\
ft_memccpy.c   ft_strcat.c   ft_strjoin.c   ft_strnstr.c\
ft_memchr.c    ft_strchr.c   ft_strlcat.c   ft_strrchr.c\

NAME = libft.a
OBJ=$(SRC:.c=.o)

$(NAME): includes/libft.h
	$(CC) $(FLAGS) -c $(SRC) $(HEAD)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

