NAME = libftprintf.a

SRC = ft_putstr.c ft_putchar.c ft_putnbr.c

OBJ = $(SRC:.c=.o)

all :$(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $^

%.o : %.c libftprintf.h
	$(CC) -c $(CFLAGS) $< -o $@

re: fclean all

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

