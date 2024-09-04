NAME = Newsed
CFLAGS = -std=c++98 -Wall -Wextra -Werror -g3

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

%.o:%.cpp
	c++ $(CFLAGS) -c $< -o $@

all:$(NAME)

$(NAME): $(OBJ)
	c++ $(CLFAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean
