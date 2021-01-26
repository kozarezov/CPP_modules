SRCS	= megaphone.cpp

NAME	= megaphone

FLAG	= -Wall -Werror -Wextra
CC		= clang++ $(FLAG)

OBJS	= $(SRCS:.cpp=.o)

.PHONY: all clean fclean re test

all:	$(NAME)

$(NAME):$(OBJS)
		$(CC) -o $@ $^

test: 	$(NAME)
		bash test.sh

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re: 	fclean all