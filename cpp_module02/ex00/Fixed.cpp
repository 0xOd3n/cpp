/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:29:07 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/22 21:53:41 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fp_value = 0;	
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& val)
{
	std::cout << "Copy assignment operator called\n";
	this->fp_value = val.fp_value; 
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return(this->fp_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->fp_value = raw;
}
