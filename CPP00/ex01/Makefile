NAME	= phonebook
CFLAGS	= -std=c++98 -Wall -Wextra -Werror

SRC 	= Contact.cpp main.cpp PhoneBook.cpp 
			
OBJ		= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) 
		c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean :
		@rm -f $(OBJ)


fclean : clean
		@rm -f $(NAME)


re : fclean all

.PHONY: all clean fclean re	
