NAME		= 	ex03

SRCS		=	AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp

HEADER		=	AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

OBJS		= 	$(SRCS:.cpp=.o)

DEPENDENCES	= 	$(OBJS:.o=.d)

CC			=	c++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98 -g3

all:		$(NAME)


$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp $(HEADER)
		$(CC) $(CFLAGS) -MMD -o $@ -c $< 

clean:		
			$(RM) $(OBJS) $(DEPENDENCES)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
