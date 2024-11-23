NAME       =     claptrap
CXX       =     g++
CXXFLAGS    =     -Wall -Wextra -Werror -std=c++98
SRCS_DIR    =     srcs
OBJ_DIR    =     .objs
INCS_DIR    =     includes
SRCS       =     ClapTrap.cpp \
                   main.cpp \
                   ScavTrap.cpp

OBJS       =     $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

# colors
GREEN      =     \033[0;32m
RED       =     \033[0;31m
YELLOW     =     \033[0;33m
WHITE      =     \033[0;37m
RESET      =     \033[0m

# debug
DEBUG      =     0
ifeq ($(DEBUG), 1)
    CXXFLAGS += -g3 -fsanitize=address
endif

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@echo "$(GREEN)$(NAME)$(RESET) created"

$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -I $(INCS_DIR) -c $< -o $@
	@echo "$(YELLOW)[$(NAME)]$(RESET) $< compiled"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)$(NAME)$(RESET) objects deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME)$(RESET) deleted"

re: fclean all

.PHONY: all clean fclean re