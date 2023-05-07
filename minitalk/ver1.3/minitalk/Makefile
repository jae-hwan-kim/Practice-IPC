# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaekim <jaekim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 20:59:54 by jaekim            #+#    #+#              #
#    Updated: 2022/06/09 20:59:55 by jaekim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER_DIR = ./server/
CLIENT_DIR = ./client/

all : 
	make -C $(SERVER_DIR) all
	make -C $(CLIENT_DIR) all

clean :
	make -C $(SERVER_DIR) clean
	make -C $(CLIENT_DIR) clean

fclean : clean
	make -C $(SERVER_DIR) fclean
	make -C $(CLIENT_DIR) fclean

re : fclean all

.PHONY : all clean fclean re
