TARGET			= DiamondTrap

SRCS			= main.cpp \
					ClapTrap.cpp \
					ScavTrap.cpp \
					FragTrap.cpp \
					DiamondTrap.cpp \


OBJS			= $(SRCS:.cpp=.o)

CLA				= clang++
RM				= rm -f
CLAFLAGS		= -Wall -Wextra -Werror -Wshadow  -Wno-shadow -std=c++98

all:			$(TARGET)

$(TARGET):		$(OBJS)
				$(CLA) $(CLAFLAGS) $(OBJS) -o $(TARGET) 

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(TARGET)

re:				fclean $(TARGET)

.PHONY:			all clean fclean re
