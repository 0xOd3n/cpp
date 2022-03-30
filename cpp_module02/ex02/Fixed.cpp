/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:29:07 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/30 22:37:58 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called\n";
	this->fp_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called\n";
	this->fp_value = value << frac_bit_val;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called\n";
	this->fp_value = roundf(value * (1 << frac_bit_val));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

void Fixed::setRawBits( int const raw ) 
{
	this->fp_value = raw;
}

int Fixed::getRawBits( void ) const
{
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
	this->fp_value = val.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool	Fixed::operator<( const Fixed& val )
{
	return (this->fp_value < val.fp_value);
}

bool	Fixed::operator<=( const Fixed& val )
{
	return (this->fp_value <= val.fp_value);
}

bool	Fixed::operator>( const Fixed& val )
{
	return (this->fp_value > val.fp_value);
}

bool	Fixed::operator>=( const Fixed& val )
{
	return (this->fp_value >= val.fp_value);
}

bool	Fixed::operator!=( const Fixed& val )
{
	return (this->fp_value != val.fp_value);
}

bool	Fixed::operator==( const Fixed& val )
{
	return (this->fp_value == val.fp_value);
}

Fixed	Fixed::operator+(const Fixed& val )
{
	Fixed tmp;
	tmp.fp_value = (this->fp_value + val.fp_value);
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed& val )
{
	Fixed tmp;
	tmp.fp_value = (this->fp_value - val.fp_value);
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed& val )
{
	Fixed tmp;
	tmp.fp_value = (this->fp_value * ( val.fp_value / (1 << frac_bit_val)));
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed& val )
{
	Fixed tmp;
	tmp.fp_value = ((this->fp_value * (1 << frac_bit_val)) / val.fp_value);
	return (tmp);
}

Fixed	Fixed::operator++()
{
	++this->fp_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->fp_value++;
	return (tmp);
}

Fixed	Fixed::operator--()
{
	--this->fp_value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->fp_value--;
	return (tmp);
	
}

Fixed	Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return (a);
	return (b);
}
const Fixed	Fixed::max(const Fixed& a, const Fixed& b)
{
	if ((Fixed)a >= b)
		return (a);
	return (b);
}
Fixed	Fixed::min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return (a);
	return (b);
}
const Fixed	Fixed::min(const Fixed& a, const Fixed& b)
{
	if ((Fixed)a <= b)
		return (a);
	return (b);
}