NAME = scavenger
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.
SRCS = $(wildcard *.cpp)
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

$(OBJ): %.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
.SILENT: