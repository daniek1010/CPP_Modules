NAME = brainjotter
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.
SHADOW = -Wshadow -Wno-shadow
SRCS = $(wildcard *.cpp)
OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(SHADOW) $(SRCS) -o $(NAME)

$(OBJ): %.o : %.cpp
	$(CC) $(CFLAGS) $(SHADOW) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.replace

re: fclean all

.PHONY: all clean fclean re
.SILENT: