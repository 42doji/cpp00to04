NAME		=		harl
CXX			=		clang++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98
SRCS_DIR	=		srcs
OBJS_DIR	=		.objs
INCS_DIR	=		includes
SRCS		=		main.cpp \
					Harl.cpp
OBJS		=		$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

# colors
RED			=		\033[0;31m
GREEN		=		\033[0;32m
YELLOW		=		\033[0;33m
BLUE		=		\033[0;34m
MAGENTA		=		\033[0;35m
CYAN		=		\033[0;36m
RESET		=		\033[0m

# debug
DEBUG		=		0
ifeq ($(DEBUG), 1)
	CXXFLAGS	+= -g3 -fsanitize=address
endif

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@echo "$(GREEN)$(NAME)$(RESET) created"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -I $(INCS_DIR) -c $< -o $@
	@echo "$(GREEN)$(notdir $<)$(RESET) created"

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(YELLOW)$(OBJS_DIR)$(RESET) deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)$(NAME)$(RESET) deleted"

re: fclean all

test: $(NAME)
	@./$(NAME)

.PHONY: all clean fclean re test