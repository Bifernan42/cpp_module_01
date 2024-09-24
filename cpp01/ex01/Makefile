CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Iincludes -g
SRCS = srcs/main.cpp srcs/Zombie.cpp srcs/zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = zombie

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
