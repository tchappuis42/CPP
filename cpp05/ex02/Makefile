SRCS			= Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS			= ${SRCS:.cpp=.o}
NAME            = bureau
CC				= g++-12
RM              = rm -f

CFLAGS          = -Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}
			./${NAME}

clean:
			${RM} ${OBJS} *_shrubbery

fclean:     clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re