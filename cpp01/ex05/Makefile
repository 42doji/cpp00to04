NAME		=		Harl
CXX			=		g++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98
SRCS_DIR	=		srcs
OBJS_DIR	=		.objs
INCS_DIR	=		includes
SRCS		=		main.cpp \
					Harl.cpp
OBJS		=		$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))
INCS		=		Harl.hpp
RM			=		rm -rf

# colors
GREEN		=		"\033[0;32m"
WHITE		=		"\033[0;37m"
ORANGE		=		"\033[0;33m"
RED			=		"\033[0;31m"
NC			=		"\033[0m"

# debug
DEBUG		=		0
ifeq ($(DEBUG), 1)
	CXXFLAGS	+=	-g
endif

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@echo $(GREEN)"[INFO] "$(NAME)" compiled successfully!"$(NC)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(INCS_DIR)/$(INCS)
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -I $(INCS_DIR) -c $< -o $@
	@echo $(GREEN)"[INFO] "$< "compiled!"$(NC)

clean:
	@$(RM) $(OBJS_DIR)
	@echo $(ORANGE)"[INFO] Objects removed!"$(NC)

fclean: clean
	@$(RM) $(NAME)
	@echo $(RED)"[INFO] "$(NAME)" removed!"$(NC)

re: fclean all


test: all
	@./$(NAME)

.PHONY: all clean fclean re test

