NAME		= ex03

SRCS		=	HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

HEADER		=	HumanA.hpp HumanB.hpp Weapon.hpp

OBJS		= $(SRCS:.cpp=.o)

DEPENDENCES	= $(OBJS:.o=.d)

CC			= c++

RM			= rm -rf

CFLAGS		= -Wall -Wextra  -Werror -std=c++98 -g

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
