NAME = libftprintf.a

SRC = ft_print_bonus.c ft_printf.c ft_putnbr_base.c ft_put_alpha.c ft_print_p.c

OBJ = $(SRC:.c=.o)

#BONUS_SRC = ft_print_bonus.c

#OBJ_BONUS = $(BONUS_SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar -rcs $@ $^

#bonus: $(OBJ_BONUS) $(OBJ)
#ar -rcs $(NAME) $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re