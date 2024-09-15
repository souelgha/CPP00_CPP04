NAME= bsp
CXXFLAGS= -std=c++98 -Wall -Wextra -Werror -g3
CC= c++

SRC= main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJ=$(SRC:.cpp=.o)

all:$(NAME)

%.o:%.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME):$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)

re : fclean all

.PHONY: re all clean fclean