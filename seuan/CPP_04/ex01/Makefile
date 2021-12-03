TARGET			= Animal

SRCS			= main.cpp \
					Animal.cpp \
					Cat.cpp \
					Dog.cpp \
					Brain.cpp \

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

.PHONY:			all clean fclean re
