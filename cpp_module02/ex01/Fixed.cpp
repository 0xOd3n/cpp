/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:29:07 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/30 18:43:43 by abbelhac         ###   ########.fr       */
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

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	this->fp_value = value << frac_bit_val;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	this->fp_value = roundf(value * (1 << frac_bit_val));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}


void Fixed::setRawBits( int const raw ) 
{
	std::cout << "setRawBits member function called\n";
	this->fp_value = raw;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return(this->fp_value);
}

float	Fixed::toFloat(void) const
{
	return ( float(fp_value) / (1 << frac_bit_val) );
}

int		Fixed::toInt(void) const
{
	return (fp_value >> frac_bit_val );
}

Fixed& Fixed::operator=(const Fixed& val)
{
	std::cout << "Copy assignment operator called\n";
	this->fp_value = val.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}
