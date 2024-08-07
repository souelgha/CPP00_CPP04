NAME	= megaphone
CFLAGS	= -std=c++98 -Wall -Wextra -Werror
INCS	= -I

SRC 	= megaphone.cpp 
			
OBJ		= $(SRC:.cpp=.o)

all : $(NAME)

%.o: %.c
	c++ $(CFLAGS) -c $< -o $@ $(INCS)

$(NAME) : $(OBJ) 
		c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean :
		@rm -f $(OBJ)


fclean : clean
		@rm -f $(NAME)


re : fclean all

.PHONY: all clean fclean re
	
