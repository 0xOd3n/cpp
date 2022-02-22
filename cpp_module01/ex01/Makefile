# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 16:04:40 by abbelhac          #+#    #+#              #
#    Updated: 2022/02/22 22:07:39 by abbelhac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRCS = Zombie.cpp \
		ZombieHorde.cpp\
		main.cpp
OBJ = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
HEADER = Zombie.hpp

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