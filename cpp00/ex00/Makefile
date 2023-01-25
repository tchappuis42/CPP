# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/23 15:47:42 by tchappui          #+#    #+#              #
#    Updated: 2022/06/30 15:18:41 by tchappui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRCS	= megaphone.cpp

CC		= g++-11

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

all:		${NAME}

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:		
			${RM} ${NAME}

re:			fclean all
