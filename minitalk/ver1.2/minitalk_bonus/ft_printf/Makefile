NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = -rcs

SRC = 	./src/ft_check.c\
		./src/ft_form_check.c\
		./src/ft_printf.c

UTIL =	./util/ft_put_c.c\
		./util/ft_put_s.c\
		./util/ft_put_d_i.c\
		./util/ft_putchar_fd.c\
		./util/ft_putnbr.c\
		./util/ft_put_u.c\
		./util/ft_puthex.c\
		./util/ft_put_x.c\
		./util/ft_put_p.c

OBJS = $(SRC:.c=.o) $(UTIL:.c=.o)

all: $(NAME)

$(NAME):  $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean all

.PHONY : all clean fclean reAME = libftprintf.a
