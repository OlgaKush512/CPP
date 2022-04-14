NAME		= phonebook

SRCS		=	Contact.cpp PhoneBook.cpp main.cpp
HEADER		= 	Contact.hpp PhoneBook.hpp

OBJS		= $(SRCS:.cpp=.o)

DEPENDENCES	= $(OBJS:.o=.d)

CC			= c++

RM			= rm -rf

CFLAGS		= -Wall -Wextra  -Werror -std=c++98

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
