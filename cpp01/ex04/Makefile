NAME		=		sedV2
CXX			=		g++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98
SRCS_DIR	=		srcs
OBJS_DIR	=		.objs
INCS_DIR	=		includes
SRCS		=		main.cpp \
					SedV2.cpp
OBJS		=		$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))
INCS		=		SedV2.hpp
RM			=		rm -rf

# colors
GREEN		=		"\033[0;32m"
WHITE		=		"\033[0m"

# debug
ifeq ($(DEBUG), 1)
	CXXFLAGS += -g3 -fsanitize=address
endif

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $@ $^
	@echo $(GREEN)"$(NAME) compiled"$(WHITE)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(addprefix $(INCS_DIR)/, $(INCS))
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -I $(INCS_DIR) -o $@ -c $<

clean:
	@$(RM) $(OBJS_DIR)
	@echo $(GREEN)"$(NAME) objects removed"$(WHITE)

fclean: clean
	@$(RM) $(NAME)
	@echo $(GREEN)"$(NAME) removed"$(WHITE)

re: fclean all

.PHONY: all clean fclean re