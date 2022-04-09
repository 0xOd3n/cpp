/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:33:34 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 02:33:14 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    // std::cout << "RobotomyRequestForm default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
    // std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form(copy), _target(copy._target)
{
    // std::cout << "RobotomyRequestForm copy constructor called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
    if (this != &copy)
    {
        this->_target = copy._target;
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "RobotomyRequestForm destructor called\n";
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void    RobotomyRequestForm::Action() const
{
    int		random;

	srand (time(NULL));
	random = rand() % 2;
	std::cout << "* DRILLING NOISES *\n" << std::endl;
	if (random)
		std::cout << _target << " has been robotomized successfully\n";
	else
		std::cout << _target << " failed to get robotomized!!\n";
}
