# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 10:18:33 by seoyoung          #+#    #+#              #
#    Updated: 2021/11/17 10:35:10 by seoyoung         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Wextra -Werror
CDEBUG = -fsanitize=address -g -std=c++98

RM = rm -rf

NAME = main

SRC = main.cpp
	
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) -o $@ $^

%.o : %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

.PHONY : all clean fclean re

clean:
		$(RM)

fclean: clean
		$(RM) $(NAME)

re : fclean all
