
FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
CC = c++
FILE = main.cpp Fixed.cpp Point.cpp bsp.cpp
NAME = main 

all: $(NAME)

fclean:
	rm -f $(NAME)
	rm -f *.o

test:
	./$(NAME)

re: fclean all test

$(NAME):
	$(CC) $(FLAGS) $(FILE) -o $@
