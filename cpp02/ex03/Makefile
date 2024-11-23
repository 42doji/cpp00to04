NAME		=		Fixed
CXX			=		clang++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98
SRCS_DIR	=		srcs
OBJS_DIR	=		.objs
INCS_DIR	=		includes
SRCS		=		Fixed.cpp \
					Point.cpp \
					bsp.cpp \
					main.cpp
OBJS		=		$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))
INCS		=		Fixed.hpp \
					Point.hpp

# colors
GREEN		=		\033[0;32m
RED			=		\033[0;31m
RESET		=		\033[0m

# debug
DEBUG		=		0
ifeq ($(DEBUG), 1)
	CXXFLAGS	+=	-g3 -fsanitize=address
endif



all: $(NAME)

$(NAME): $(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
			@echo "$(GREEN)$(NAME) created$(RESET)"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(addprefix $(INCS_DIR)/, $(INCS))
			@mkdir -p $(OBJS_DIR)
			@$(CXX) $(CXXFLAGS) -I $(INCS_DIR) -c $< -o $@
			@echo "[$(GREEN)√$(RESET)] $@"

clean:
			@rm -rf $(OBJS_DIR)
			@echo "$(RED)Objects removed$(RESET)"

fclean: clean
			@rm -f $(NAME)
			@echo "$(RED)$(NAME) removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re