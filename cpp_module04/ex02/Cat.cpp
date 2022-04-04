/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:00:21 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 17:50:48 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
	this->brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called\n";
	this->brain = NULL;
	*this = copy;
}

Cat&	Cat::operator=(const Cat& copy)
{
	std::cout << "Cat Assignation operator has been called!!" << std::endl;
	if (this != &copy)
	{
		delete this->brain;
		this->brain = new Brain();
		this->_type = copy.getType();
		*(this->brain) = *(copy.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete this->brain;
}

void	Cat::set_ideas(std::string idea, int i)
{
	if (i < 99)
		this->brain->set_ideas(idea, i);
	else
		std::cout << "Cat Brain : Wrong index\n";
}

void	Cat::display_ideas(int i)
{
	if (i > 99)
		std::cout << "Cat Brain : Wrong index" << std::endl;
	else
		std::cout << brain->get_ideas(i) << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow\n";
}
