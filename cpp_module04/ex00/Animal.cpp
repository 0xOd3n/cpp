/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:13:00 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/02 20:00:14 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called\n";
	this->_type = "";
}

Animal::Animal(std::string& type)
{
	std::cout << "Animal constructor called\n";
	this->_type = type;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called\n";
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

Animal&	Animal::operator=(const Animal& copy)
{
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
}