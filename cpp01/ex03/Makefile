NAME		=		attack
CXX			=		c++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98
RM			=		rm -rf
SRCS_DIR	=	    srcs
OBJS_DIR	=	    .objs
INCS_DIR	=	    includes
SRCS		=		main.cpp \
					Weapon.cpp \
					HumanA.cpp \
					HumanB.cpp
OBJS		=		$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))
INCS		=		$(INCS_DIR)/Weapon.hpp \
					$(INCS_DIR)/HumanA.hpp \
					$(INCS_DIR)/HumanB.hpp

GREEN		=		"\033[0;32m"
WHITE		=		"\033[0;37m"
ORANGE		=		"\033[0;33m"
RED			=		"\033[0;31m"
NC			=		"\033[0m"

DEBUG		=		0
ifeq ($(DEBUG), 1)
	CXXFLAGS	+= -g3 -fsanitize=address
endif

all:			$(NAME)

$(NAME):		$(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@echo $(GREEN)"[INFO] $(NAME) has been created!"$(NC)

$(OBJS_DIR)/%.o:$(SRCS_DIR)/%.cpp $(INCS)
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -I $(INCS_DIR) -c $< -o $@
	@echo $(WHITE)"[INFO] $< has been compiled!"$(NC)

clean:
	@$(RM) $(OBJS_DIR)
	@echo $(ORANGE)"[INFO] Objects files have been removed!"$(NC)

fclean:			clean
	@$(RM) $(NAME)
	@echo $(RED)"[INFO] $(NAME) has been removed!"$(NC)

re:				fclean all

.PHONY:			all clean fclean re
