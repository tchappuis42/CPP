# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 14:44:13 by tchappui          #+#    #+#              #
#    Updated: 2022/07/28 14:05:12 by tchappui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Unnecessary_violence

SRCS	= main.cpp HumanA.cpp Weapon.cpp Weapon.hpp HumanB.cpp HumanB.hpp

CC		= g++-11

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:		
			${RM} ${NAME}

re:			fclean all
