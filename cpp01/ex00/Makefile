NAME=zombie
CXX=g++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
RM=rm -f
SRC=Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re