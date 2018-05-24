CC = gcc
NAME = libft.a
C_FILES =  ft_putchar.c\
	ft_putstr.c\
	ft_putnbr.c\
	ft_strlen.c\
	ft_atoi.c\
	ft_memccpy.c\
	ft_putnbr.c\
	ft_strdup.c\
	ft_strrchr.c\
	ft_bzero.c\
	ft_memchr.c\
	ft_putstr.c\
	ft_strlcat.c\
	ft_strstr.c\
	ft_isalnum.c\
	ft_memcmp.c\
	ft_strcat.c\
	ft_strlen.c\
	ft_tolower.c\
	ft_isalpha.c\
	ft_memcpy.c\
	ft_strchr_2.c\
	ft_strncat.c\
	ft_toupper.c\
	ft_isascii.c\
	ft_memmove.c\
	ft_strchr.c\
	ft_strncmp.c\
	ft_isdigit.c\
	ft_memset.c\
	ft_strcmp.c\
	ft_strncpy.c\
	ft_isprint.c\
	ft_putchar.c\
	ft_strcpy.c\
	ft_strnstr.c\

SRCS = srcs/*.c
INCLUDE = includes/libft.h
FLAGS = -Wall -Wextra -Werror

MAIN = main.c

all:
	clear
	$(CC) $(FLAGS) $(INCLUDE) $(SRCS) $(MAIN)
	ar rc $(NAME)

