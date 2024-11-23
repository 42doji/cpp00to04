NAME		=		Fixed
CXX			=		clang++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98
SRCS_DIR	=		srcs
OBJS_DIR	=		.objs
INCS_DIR	=		includes
SRCS		=		Fixed.cpp \
					main.cpp
OBJS		=		$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))
INCS		=		Fixed.hpp
RM			=		rm -rf

# colors
BLUE		=		"\033[0;34m"
GREEN		=		"\033[0;32m"
WHITE		=		"\033[0;37m"
RESET		=		"\033[0m"

# debug
DEBUG		=		0
ifeq ($(DEBUG), 1)
	CXXFLAGS	+= -g3 -fsanitize=address
endif

all:				$(NAME)

$(NAME):			$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo $(BLUE)"$(NAME) has been created"$(RESET)

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.cpp $(INCS_DIR)/$(INCS)
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -I $(INCS_DIR) -c $< -o $@
	@echo $(GREEN)"[OK] "$(WHITE)$(notdir $<)$(RESET)

clean:
	@$(RM) $(OBJS_DIR)
	@echo $(BLUE)"Objects files have been deleted"$(RESET)

fclean:				clean
	@$(RM) $(NAME)
	@echo $(BLUE)"$(NAME) has been deleted"$(RESET)

re:					fclean all

test:
	@./$(NAME)

.PHONY:				all clean fclean re test
