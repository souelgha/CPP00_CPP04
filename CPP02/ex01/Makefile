NAME=Fixedd
CFLAGS= -std=c++98 -Wall -Wextra -Werror -g3

SRC= main.cpp Fixed.cpp

OBJ=$(SRC:.cpp=.o)

all:$(NAME)

%.o:%.cpp
	c++ $(CFLAGS) -c $< -o $@

$(NAME):$(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)

re : fclean all

.PHONY: re all clean fclean