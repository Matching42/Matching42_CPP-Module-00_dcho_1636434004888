# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 14:02:59 by seuan             #+#    #+#              #
#    Updated: 2021/11/16 14:03:00 by seuan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET			= phonebook

SRCS			= main.cpp \
					contact.cpp \
					phonebook.cpp
					
OBJS			= $(SRCS:.cpp=.o)

CLA				= clang++
RM				= rm -f
CLAFLAGS		= -Wall -Wextra -Werror -std=c++98


all:			$(TARGET)

$(TARGET):		$(OBJS)
				$(CLA) $(CLAFLAGS) $(OBJS) -o $(TARGET) 

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(TARGET)

re:				fclean $(TARGET)

testcase:			
				

.PHONY:			all clean fclean re testcase
