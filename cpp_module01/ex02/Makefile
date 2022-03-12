# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 19:47:21 by abbelhac          #+#    #+#              #
#    Updated: 2022/03/12 19:48:03 by abbelhac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRCS = main.cpp
OBJ = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

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