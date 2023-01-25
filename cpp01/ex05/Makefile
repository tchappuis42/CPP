# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 13:38:18 by tchappui          #+#    #+#              #
#    Updated: 2022/07/25 13:39:00 by tchappui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Harl

SRCS	= main.cpp harl.cpp

CC		= g++-11

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98

all:		${NAME}

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:		
			${RM} ${NAME}

re:			fclean all