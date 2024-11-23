NAME		=		materia
CXX			=		clang++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98
SRCS_DIR	=		srcs
OBJS_DIR	=		.objs
INCS_DIR	=		includes
SRCS		=		AMateria.cpp \
					Character.cpp \
					Cure.cpp \
					Ice.cpp \
					MateriaSource.cpp \
					main.cpp
OBJS		=		$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))
INCS		=		AMateria.hpp \
					Character.hpp \
					Cure.hpp \
					Ice.hpp \
					MateriaSource.hpp \
					ICharacter.hpp \
					IMateriaSource.hpp
RM			=		rm -rf

# colors
GREEN		=		"\033[0;32m"
YELLOW		=		"\033[0;33m"
WHITE		=		"\033[0m"

# debug
DEBUG		=		0
ifeq ($(DEBUG), 1)
	CXXFLAGS	+= -g3 -fsanitize=address
endif

all:				$(NAME)

$(NAME):			$(OBJS)
	@$(CXX) $(CXXFLAGS) -o $@ $^
	@echo $(GREEN)"[INFO] "$(NAME)" compiled!"$(WHITE)

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.cpp $(addprefix $(INCS_DIR)/, $(INCS))
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -o $@ -c $< -I $(INCS_DIR)
	@echo $(YELLOW)"[INFO] Compiled "$<"!"$(WHITE)

clean:
	@$(RM) $(OBJS_DIR)
	@echo $(GREEN)"[INFO] Removed object files!"$(WHITE)

fclean:				clean
	@$(RM) $(NAME)
	@echo $(GREEN)"[INFO] Removed "$(NAME)$(WHITE)

re:					fclean all

.PHONY:				all clean fclean re