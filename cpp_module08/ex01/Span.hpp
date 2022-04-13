/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:49:55 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/13 03:04:52 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class Span
{
	private:
        
		unsigned int	_N;
		unsigned int	_stored;
        std::vector<int> vect;
	public:
		class	fullObjectException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	noSpan : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Span();
		Span(unsigned int n);
		Span(const Span& copy);
		Span&	operator=(const Span& copy);
		void	addNumber(int n);
		int		shortestSpan() const;
		int		longestSpan() const;
		void    addNumbers(int array[], int len);
		~Span();
};

#endif