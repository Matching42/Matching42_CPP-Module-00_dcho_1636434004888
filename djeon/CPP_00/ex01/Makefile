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
