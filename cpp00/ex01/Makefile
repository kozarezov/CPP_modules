SRCS	= phonebook.cpp main.cpp contact.cpp

NAME	= phonebook

FLAG	= -Wall -Werror -Wextra
CC		= clang++ $(FLAG)

OBJS	= $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):$(OBJS) $(HEADER)
		$(CC) -o $@ $^

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re: 	fclean all