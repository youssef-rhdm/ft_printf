CC = cc

NAME = libftprintf.a

SRC =  ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c ft_printf.c ft_putptr.c ft_putuint.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all :$(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $^

%.o : %.c ft_printf.h
	$(CC) -c $(CFLAGS) $< -o $@

re: fclean all

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)
