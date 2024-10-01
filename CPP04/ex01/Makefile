NAME=Polymorph_ex01
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -g3
CC=c++

SRC= main.cpp Animal.cpp Cat.cpp Dog.cpp \
	WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME):$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: re fclean clean all

