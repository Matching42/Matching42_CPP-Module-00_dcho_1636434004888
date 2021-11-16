CC = clang++
CFLAGS = -Wall -Wextra -Werror
NAME = account
HEADER = Account.hpp
SRC = test.cpp Account.cpp
OBJECTS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all