# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcho <dcho@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 13:57:42 by dcho              #+#    #+#              #
#    Updated: 2021/11/16 15:18:44 by dcho             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Wextra -Werror
CDEBUG = -fsanitize=address -g -std=c++98

RM = rm -rf

NAME = phonebook

SRC =	main.cpp\
		Phonebook.cpp\
		Contacts.cpp
SRC_DIR = ./srcs/
SRCS = $(addprefix $(SRC_DIR),$(SRC))

OBJ = $(SRC:.cpp=.o)
OBJ_DIR = ./objs/
OBJS = $(addprefix $(OBJ_DIR), $(OBJ))

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $^ \
		-o $@

$(OBJ_DIR)%.o : $(SRC_DIR)/%.cpp
		@mkdir -p $(OBJ_DIR)
		$(CC) $(CFLAGS) -o $@ -c $<


clean:
		$(RM) $(OBJ_DIR)

fclean: clean
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
