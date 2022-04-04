/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:13:00 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 17:51:19 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called\n";
	this->_type = "";
}

WrongAnimal::WrongAnimal(const std::string& type)
{
	std::cout << "WrongAnimal constructor called\n";
	this->_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy constructor called\n";
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& copy)
{
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound\n";
}