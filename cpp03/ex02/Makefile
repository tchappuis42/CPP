# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 14:30:36 by tchappui          #+#    #+#              #
#    Updated: 2022/08/25 14:00:09 by tchappui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= ScavTrap.cpp ClapTrap.cpp main.cpp FragTrap.cpp
OBJS			= ${SRCS:.cpp=.o}
NAME            = FragTrap
CC				= c++ -g
RM              = rm -f

CFLAGS          = -Wall -Wextra -Werror -std=c++98 -pedantic -g -fsanitize=address

.c.o:
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
