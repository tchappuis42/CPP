SRCS			= main.cpp
OBJS			= ${SRCS:.cpp=.o}
NAME            = Array
CC				= g++-12
RM              = rm -f

CFLAGS          = -Wall -Wextra -Werror -std=c++98 -pedantic -g

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o} ${HEADS}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}
			./${NAME}

clean:
			${RM} ${OBJS}

fclean:     clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re