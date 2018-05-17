CC = gcc
NAME = libft.a
SRCS =  srcs/ft_putchar.c\
	srcs/ft_putstr.c\
	srcs/ft_putnbr.c\
	srcs/ft_print.c\
	srcs/ft_strlen.c\
#	srcs/toupper.c\
	srcs/tolower.c\
#


FLAGS = -Wall -Wextra -Werror

MAIN = main.c

all:
	clear
	$(CC) $(FLAGS) $(SRCS) $(MAIN)
	ar rc $(NAME)

cls:
	clear

