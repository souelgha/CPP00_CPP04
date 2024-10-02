NAME= Materia
CXXFLAGS= -std=c++98 -Wall -Wextra -Werror -g3
CXX = c++


SRC = 	main.cpp Ice.cpp Cure.cpp AMateria.cpp \
		Character.cpp MateriaSource.cpp

OBJ=$(SRC:.cpp=.o)

all:$(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
