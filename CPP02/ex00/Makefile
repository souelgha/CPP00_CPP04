NAME=Fixedd
CXXFLAGS= -std=c++98 -Wall -Wextra -Werror -g3
CC= c++

SRC= main.cpp Fixed.cpp

OBJ=$(SRC:.cpp=.o)

all:$(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean:clean
	rm -f $(NAME)

re : fclean all

.PHONY: re all clean fclean