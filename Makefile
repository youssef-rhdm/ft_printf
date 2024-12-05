NAME = libftprintf.a

SRC =  ft_putchar.c ft_putstr.c ft_putstr_p.c ft_putnbr.c ft_puthex.c ft_printf.c

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


