# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seoyoung <seoyoung@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 15:51:02 by seoyoung          #+#    #+#              #
#    Updated: 2021/11/16 18:25:32 by seoyoung         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Wextra -Werror
CDEBUG = -fsanitize=address -g -std=c++98

RM = rm -rf

NAME = zombie

SRC =	Zombie.cpp\
		main.cpp\
		newZombie.cpp\
		randomChump.cpp

OBJ_DIR = ./objs/
OBJ = $(SRC:.cpp=.o)
OBJS = $(addprefix $(OBJ_DIR), $(OBJ))

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)%.o : %.cpp
		@mkdir -p $(OBJ_DIR)
		$(CC) $(CFLAGS) -c $< -o $@

.PHONY : all clean fclean re

clean:
		$(RM) $(OBJ_DIR)

fclean: clean
		$(RM) $(NAME)

re : fclean all
