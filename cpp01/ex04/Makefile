# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 14:57:11 by tchappui          #+#    #+#              #
#    Updated: 2022/07/20 14:57:37 by tchappui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Sed_is_for_losers

SRCS	= main.cpp

CC		= g++-11

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:		
			${RM} ${NAME}

re:			fclean all