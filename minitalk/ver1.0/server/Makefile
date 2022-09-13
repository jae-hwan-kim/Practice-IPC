NAME=server

CC=cc
CFLAGS= -Wall -Wextra -Werror -g3
LIB_NAME=ftprintf
LIB_DIR= ../ft_printf/
LIB=$(LIB_DIR)lib$(LIB_NAME).a
LIBFT=libftprintf.a

CP=cp
RM=rm -f
SRC= server.c \
	 server_utils.c \
	 ../utils.c \
	 ../error.c \
	 ../check.c
	
OBJ=$(SRC:.c=.o)

$(NAME) : $(LIB) $(OBJ)
	$(CC) $(CFLAGS) -L$(LIB_DIR) -l$(LIB_NAME) $(OBJ) -o $(NAME)

$(LIB) :
	make -C $(LIB_DIR) all

all : $(NAME)

clean :
	make -C $(LIB_DIR) clean
	$(RM) $(OBJ)

fclean : clean
	make -C $(LIB_DIR) fclean
	$(RM) $(LIBFT)
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
