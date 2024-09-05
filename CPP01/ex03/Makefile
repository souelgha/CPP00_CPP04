NAME=fight
CFLAGS=-std=c++98 -Wall -Wextra -Werror -g3

SRCS= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all:$(NAME)

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: All re clean fclean