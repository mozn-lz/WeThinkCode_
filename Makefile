CC=gcc
FLAGS=-Wall -Wextra -Werror
HEAD=libft.h
MAIN=main.c
SRC=ft_itoa.c		ft_putchar.c 	ft_strchr.c 	ft_strjoin.c 	ft_strnew.c\
ft_memalloc.c	ft_putchar_fd.c	ft_strclr.c		ft_strlcat.c	ft_strnstr.c\
ft_atoi.c		ft_memccpy.c	ft_putendl.c	ft_strcmp.c		ft_strlen.c		ft_strrchr.c\
ft_bzero.c		ft_memchr.c		ft_putendl_fd.c	ft_strcpy.c		ft_strmap.c		ft_strsplit.c\
ft_isalnum.c	ft_memcmp.c		ft_putnbr.c		ft_strdel.c		ft_strmapi.c	ft_strstr.c\
ft_isalpha.c	ft_memcpy.c		ft_putnbr_fd.c	ft_strdup.c		ft_strncat.c	ft_strsub.c\
ft_isascii.c	ft_memdel.c		ft_putstr.c		ft_strequ.c		ft_strncmp.c	ft_strtrim.c\
ft_isdigit.c	ft_memmove.c	ft_putstr_fd.c	ft_striter.c	ft_strncpy.c	ft_tolower.c\
ft_isprint.c	ft_memset.c		ft_strcat.c		ft_striteri.c	ft_strnequ.c	ft_toupper.c

NAME=libft.a


OBJ:=$(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $?
	ranlib $@

%.o: %.c 
	gcc $(FLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
RM=rm -f
