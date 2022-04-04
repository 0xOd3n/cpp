/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:20:22 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 17:50:52 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called\n";
	this->brain = new Brain();

}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called\n";
	this->brain = NULL;
	*this = copy;
}

Dog&	Dog::operator=(const Dog& copy)
{
	std::cout << "Dog Assignation operator has been called!!" << std::endl;
	if (this != &copy)
	{
		delete this->brain;
		this->brain = new Brain();
		this->_type = copy.getType();
		*(this->brain) = *(copy.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called\n";
}

void	Dog::set_ideas(std::string idea, int i)
{
	if (i < 99)
		std::cout << " Dog Brain : Wrong index\n";
	else
		this->brain->set_ideas(idea, i);
}

void	Dog::display_ideas(int i)
{
	if (i > 99)
		std::cout << "Dog Brain : Wrong index" << std::endl;
	else
		std::cout << brain->get_ideas(i) << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Hoo hoo\n";
}
