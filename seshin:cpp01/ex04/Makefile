# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 14:54:11 by seoyoung          #+#    #+#              #
#    Updated: 2021/11/19 11:11:39 by seoyoung         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Wextra -Werror
CDEBUG = -fsanitize=address -g -std=c++98

RM = rm -rf

NAME = replace

SRC = main.cpp\
		Input.cpp\
		Replace.cpp\

		
OBJ_DIR = ./objs/
OBJ = $(SRC:.cpp=.o)
OBJS = $(addprefix $(OBJ_DIR), $(OBJ))

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(CDEBUG) -o $@ $^

$(OBJ_DIR)%.o : %.cpp
		@mkdir -p $(OBJ_DIR)
		$(CC) $(CFLAGS) $(CDEBUG) -c $< -o $@

.PHONY : all clean fclean re

clean:
		$(RM) $(OBJ_DIR)

fclean: clean
		$(RM) $(NAME)

re : fclean all