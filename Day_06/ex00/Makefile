NAME		= convert

SRCS		= main.cpp ConvertClass.cpp

OBJS		= $(SRCS:.cpp=.o)

CC			= clang++

RM			= rm -rf

CFLAGS		= -Wall -Wextra  -Werror -std=c++98 -g -fsanitize=address

all:		$(NAME)


$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:		
			$(RM) $(OBJS)	*_shrubbery

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
