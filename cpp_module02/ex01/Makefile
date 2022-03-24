# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 16:04:40 by abbelhac          #+#    #+#              #
#    Updated: 2022/03/24 18:42:27 by abbelhac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRCS = Fixed.cpp \
		main.cpp
OBJ = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
HEADER = Fixed.hpp

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	c++ $(FLAGS) $(STD) $(OBJ) -o $(NAME)

%.o : %.c
	c++ $(FLAGS) $(STD) $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all