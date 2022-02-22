# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 19:40:17 by abbelhac          #+#    #+#              #
#    Updated: 2022/02/22 04:02:39 by abbelhac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

SRCS = Phonebook.cpp \
		Contact.cpp \
		main.cpp
OBJ = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
HEADER = Phonebook.hpp Contact.hpp

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