# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 14:30:36 by tchappui          #+#    #+#              #
#    Updated: 2022/06/30 15:18:39 by tchappui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

SRCS	= phonebook.hpp phonebook.cpp contact.cpp contact.hpp main.cpp

CC		= g++-11

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

all:		${NAME}

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:		
			${RM} ${NAME}

re:			fclean all

