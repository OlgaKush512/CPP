

NAME		= ex02

SRCS		= Account.cpp tests.cpp


OBJS		= $(SRCS:.cpp=.o)

CC			= clang++

RM			= rm -rf

CFLAGS		= -Wall -Wextra  -Werror -std=c++98

all:		$(NAME)


$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS)	

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
