NAME	= megaphone
CFLAGS	= -std=c++98 -Wall -Wextra -Werror

SRC 	= megaphone.cpp 
			
OBJ		= $(SRC:.cpp=.o)

all : $(NAME)

%.o: %.c
	c++ $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
		c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean :
		@rm -f $(OBJ)


fclean : clean
		@rm -f $(NAME)


re : fclean all

.PHONY: all clean fclean re
	
