
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CC = c++
INCLUDE = Fixed.hpp
FILE = main.cpp Fixed.cpp
NAME = main

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o

test:
	./$(NAME)

re: fclean all test

$(NAME):
	$(CC) $(FLAGS) $(FILE) -I $(INCLUDE) -o $@
