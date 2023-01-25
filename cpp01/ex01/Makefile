# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 18:41:51 by tchappui          #+#    #+#              #
#    Updated: 2022/07/28 14:01:20 by tchappui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie

SRCS	= zombie.cpp zombieHorde.cpp main.cpp

CC		= g++-11

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:		
			${RM} ${NAME}

re:			fclean all