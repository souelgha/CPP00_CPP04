NAME = FragTrap
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -g3
CC= c++

SRC= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ=$(SRC:.cpp=.o)

%.o:%.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@ 

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re: clean all

.PHONY:re all clean fclean