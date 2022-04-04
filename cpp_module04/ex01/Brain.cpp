/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:59:44 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 23:03:17 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain& copy)
{
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called\n";
}

Brain&	Brain::operator=(const Brain& copy)
{
	if (this == &copy)
		return (*this);
}