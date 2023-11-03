NAME = libftprintf.a

SRC = ft_printf.c \
	ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(SRC)
	ar -rcs $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re