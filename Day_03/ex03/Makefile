NAME		= 	ex03

SRCS		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HEADER		=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

OBJS		= 	$(SRCS:.cpp=.o)

DEPENDENCES	= 	$(OBJS:.o=.d)

CC			=	c++

RM			= 	rm -rf

CFLAGS		= 	-Wall -Wextra  -Werror -std=c++98

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
