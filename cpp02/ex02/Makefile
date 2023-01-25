# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 15:20:37 by tchappui          #+#    #+#              #
#    Updated: 2022/07/25 16:33:35 by tchappui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Fixed

SRCS	= Fixed.cpp main.cpp

CC		= g++-11

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

all:		${NAME}

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:		
			${RM} ${NAME}

re:			fclean all