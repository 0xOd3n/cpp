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
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor called\n";
	*this = copy;
}

Dog&	Dog::operator=(const Dog& copy)
{
	std::cout << "Dog assignement oparator called\n";
	if (this == &copy)
		return (*this);
	Animal::operator=(copy);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

void	Dog::makeSound() const
{
	std::cout << "Hoo hoo\n";
}
