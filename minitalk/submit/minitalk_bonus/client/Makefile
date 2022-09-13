# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 21:39:09 by jaekim            #+#    #+#              #
#    Updated: 2022/06/09 21:39:10 by jaekim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=client

CC=cc
CFLAGS= -Wall -Wextra -Werror -g3
LIB_NAME=ftprintf
LIB_DIR= ../ft_printf/
LIB=$(LIB_DIR)lib$(LIB_NAME).a
LIBFT=libftprintf.a

CP=cp
RM=rm -f
SRC= client_bonus.c \
	 client_utils_bonus.c \
	 ../utils_bonus.c \
	 ../error_bonus.c \
	 ../check_bonus.c \
	 ../ack_bonus.c
	
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
