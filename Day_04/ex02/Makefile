NAME		= 	ex02

SRCS		=	AAnimal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp

HEADER		=	AAnimal.hpp Brain.hpp Cat.hpp Dog.hpp  WrongAnimal.hpp WrongCat.hpp

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
