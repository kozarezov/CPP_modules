# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/09 14:53:16 by ceccentr          #+#    #+#              #
#    Updated: 2021/01/10 11:49:37 by ceccentr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Serialization.cpp main.cpp

NAME	= Serialization

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