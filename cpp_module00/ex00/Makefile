# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 19:44:38 by abbelhac          #+#    #+#              #
#    Updated: 2022/02/16 19:38:21 by abbelhac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRCS = megaphone.cpp
OBJ = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(STD) $(OBJ) -o $(NAME)

%.o:%.c
	c++ $(FLAGS) $(STD) -c $< -o $@

clean :
	rm -i $(OBJ)

fclean : clean
	rm -i $(NAME)

re : fclean all
