NAME		= 	ex03

SRCS		=	main.cpp Bureaucrat.cpp Form.cpp RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp \
				ShrubberyCreationForm.cpp \
				Intern.cpp \

HEADER		=	Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp \
				RobotomyRequestForm.hpp ShrubberyCreationForm.hpp\
				Intern.hpp

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
			$(RM) $(OBJS) $(DEPENDENCES) *_shrubbery

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
