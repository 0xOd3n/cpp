/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:49:49 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/13 03:10:13 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->_N = 0;
	this->_stored = 0;
}

Span::Span(unsigned int n) : _N(n), _stored(0)
{
	vect.reserve(n);
}

const char*		Span::fullObjectException::what() const throw()
{
	return ("Object is full!!");
}

const char*		Span::noSpan::what() const throw()
{
	return ("There is no span!!");
}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span&	Span::operator=(const Span& copy)
{
	if (this != &copy)
	{
		this->_N = copy._N;
		this->_stored  = copy._stored;
		this->vect = copy.vect;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	try
	{
		if (this->_stored == this->_N)
			throw fullObjectException();
		vect.push_back(n);
		this->_stored++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int		Span::shortestSpan(void) const
{
	try
	{
		if (this->_stored <= 1)
			throw noSpan();
		int		span = INT_MAX;
		unsigned int i = 0;
		while (i < this->_stored)
		{
			unsigned int j = i + 1;
			while (j < this->_stored)
			{
				int		current = std::abs(this->vect[i] - this->vect[j]);
				if (current < span)
					span = current;
					j++;
			}
			i++;
		}
		return (span);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (-1);
	}
}

int		Span::longestSpan() const
{
	try
	{
		int				span;

		if (this->_stored <= 1)
			throw noSpan();
		span = std::abs(*std::max_element(this->vect.begin(), this->vect.end()) - *std::min_element(this->vect.begin(), this->vect.end()));
		return (span);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (-1);
	}
}

void    Span::addNumbers(int array[], int len)
{
    try
    {
        if ( len + this->_stored <= this->_N )
        {
            vect.insert(vect.end(), array, array + len);
            this->_stored += len;
        }
        else
            throw(fullObjectException());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Span::~Span()
{	
}