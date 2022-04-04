/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:00:21 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 18:17:37 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat copy constructor called\n";
	*this = copy;
}

WrongCat&	WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "WrongCat assignement oparator called\n";
	if (this == &copy)
		return (*this);
	WrongAnimal::operator=(copy);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat Meow\n";
}
