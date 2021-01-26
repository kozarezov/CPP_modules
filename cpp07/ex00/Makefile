# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/09 14:53:16 by ceccentr          #+#    #+#              #
#    Updated: 2021/01/11 11:05:00 by ceccentr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp

NAME	= whatever

FLAG	= -Wall -Werror -Wextra
CC		= clang++ $(FLAG)

OBJS	= $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all:	$(NAME)

$(NAME):$(OBJS)
		$(CC) -o $@ $^

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re: 	fclean all