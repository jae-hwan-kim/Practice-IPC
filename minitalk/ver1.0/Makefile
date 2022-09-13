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
