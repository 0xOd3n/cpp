# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 18:19:58 by abbelhac          #+#    #+#              #
#    Updated: 2022/04/11 02:11:29 by abbelhac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = dynamic_cast

SRCS = main.cpp identify.cpp generate.cpp

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

HEADER = Class.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(OBJS) -o $@

%.o: %.cpp $(HEADER)
	c++ $(CPPFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all