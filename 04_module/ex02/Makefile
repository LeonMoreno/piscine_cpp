#Variables
NAME		= Abstract
SRC_DIR		= src/
OBJ_DIR		= obj/
#CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic -I include/
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -I include/
CC 			= c++
RM 			= rm -fr

#Souces FIles
SRC_FILES	= main Animal Dog Cat WrongAnimal WrongCat Brain

#OBJS
##OBJ = $(SRC:.cpp=.o)
SRC 		= ($addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FILES)))
OBJ			= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
OBJF		= .cache_exists

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp | $(OBJF)
				$(CC) $(CPPFLAGS) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ_DIR)

clean:
		$(RM) $(OBJ)
		$(RM) $(OBJ_DIR)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
