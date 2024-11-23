NAME		=		animalpark
CXX			=		clang++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98
SRCS_DIR	=		srcs
OBJS_DIR	=		.objs
INCS_DIR	=		includes
SRCS		=		main.cpp \
					AAnimal.cpp \
					Dog.cpp \
					Cat.cpp \
					Brain.cpp \
					WrongAnimal.cpp \
					WrongCat.cpp
OBJS		=		$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

# colors
GREEN		=		"\033[0;32m"
RED			=		"\033[0;31m"
RESET		=		"\033[0m"

# debug
DEBUG		=		0
ifeq ($(DEBUG), 1)
	CXXFLAGS	+= -g3 -fsanitize=address
endif

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $@ $^
	@echo $(GREEN)"[INFO] $(NAME) has been created!"$(RESET)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp | $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -I $(INCS_DIR) -o $@ -c $<
	@echo $(GREEN)"[INFO] $@ has been created!"$(RESET)

$(OBJS_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo $(RED)"[INFO] Removed .objs directory"$(RESET)

fclean: clean
	@rm -f $(NAME)
	@echo $(RED)"[INFO] Removed $(NAME)"$(RESET)

re: fclean all

.PHONY: all clean fclean re