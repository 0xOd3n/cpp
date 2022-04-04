/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:59:44 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 23:03:17 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <stdlib.h>

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
	
	std::string randomideas[4] = {"luffy", "zoro", "Oden", "joyboy"};
	int i = 0;
	time_t t1;

	srand(time(&t1));
	while (i < 100)
	{
		this->ideas[i] = randomideas[rand() % 4];
		i++;
	}

}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor has been called\n";
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called\n";
}

Brain& Brain::operator= (const Brain& copy)
{
	int		i = 0;
	
	std::cout << "Brain Assignation operator has been called!!" << std::endl;
	if (this != &copy)
	{
		while (i < 100)
		{
			this->ideas[i] = copy.ideas[i];
			i++;
		}
	}
	return (*this);
}

void	Brain::set_ideas(std::string idea, int i)
{
	if (i < 100)
		ideas[i] = idea;
}

const std::string&	Brain::get_ideas(int i) const
{
	return (ideas[i]);
}
