/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:33:39 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 02:33:26 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
    // std::cout << "PresidentialPardonForm default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
    // std::cout << "PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form(copy), _target(copy._target)
{
    // std::cout << "PresidentialPardonForm copy constructor called\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
    if (this != &copy)
    {
        this->_target = copy._target;
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << "PresidentialPardonForm destructor called\n";
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void    PresidentialPardonForm::Action() const
{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}
