/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:46:34 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 00:13:13 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default contructor called\n";
    this->_name = "";
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called\n";
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy)
{
    std::cout << "FragTrap copy constructor called\n";
	*this = copy; 
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}

FragTrap&       FragTrap::operator=(const FragTrap& copy)
{
    if (this == &copy)
        return (*this);
    ClapTrap::operator=(copy);
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives request\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (this->Hit_point <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead\n";
		return ;
	}
	if (this->Energy_point <= 0)
	{
		std::cout << "FragTrap " << this->_name << " didn't have enough energy point to attack\n";
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", " << "causing " << this->Attack_damage << " points of damage\n";
	this->Energy_point--;
}
