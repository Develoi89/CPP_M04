NAME		=	test

SRC			=	AMateria.cpp\
				Character.cpp\
				Cure.cpp\
				Ice.cpp\
				MateriaSource.cpp\
				main.cpp

HDS			=	ICharacter.hpp\
				IMateriaSource.hpp\
				MateriaSource.hpp\
				AMateria.hpp\
				Character.hpp\
				Cure.hpp\
				Ice.hpp\
				Hfm.hpp

OBJ			=	$(SRC:.cpp=.o)

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

%.o:	%.cpp
		$(CC) ${CFLAGS} -o $@ -c $<

$(NAME)		:	$(OBJ) $(HDS)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all			:	$(NAME)

clean		:
		@rm -rf

fclean		:	clean
		@rm -rf $(NAME) $(OBJ)

re			:	fclean	all

.PHONY		:	all clean fclean re%