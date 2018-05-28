SRC=./srcs/ft_*
HEAD=./includes/libft.h
CC=gcc
FLAGS=-Wall -Wextra -Werror
MAIN=main.c
NAME = libft.a

all:
	$(CC) $(FLAG) $(HEAD) $(SRC) $(MAIN)

re:

clean:

fclean:
