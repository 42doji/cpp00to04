NAME		=	ZombieHorde
CXX			=	g++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS_DIR	=	srcs
OBJS_DIR	=	.objs
INCS_DIR	=	includes
SRCS		=	main.cpp Zombie.cpp ZombieHorde.cpp
OBJS		=	$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))
INCS		=	$(INCS_DIR)/Zombie.hpp
RM			=	rm -rf

RED		=	\033[0;31m
GREEN	=	\033[0;32m
YELLOW	=	\033[0;33m
BLUE	=	\033[0;34m
RESET	=	\033[0m

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME)$(RESET) created"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(INCS)
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -I $(INCS_DIR) -c $< -o $@
	@echo "$(BLUE)[$(NAME)]$(RESET) $<"

clean:
	@$(RM) $(OBJS_DIR)
	@echo "$(YELLOW)$(NAME)$(RESET) objects removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)$(NAME)$(RESET) removed"

re: fclean all

test: all
	@./$(NAME)