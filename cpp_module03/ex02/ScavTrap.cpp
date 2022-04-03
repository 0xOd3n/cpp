/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:12:41 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/02 23:40:29 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
	this->_name = "";
	this->Hit_point = 100;
	this->Energy_point = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called\n";
	this->Hit_point = 100;
	this->Energy_point = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap copy constructor called\n";
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	std::cout << "ScavTrap Assignment operator called\n";
	if (this == &copy)
		return (*this);
	ClapTrap::operator=(copy);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->Hit_point <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead\n";
		return ;
	}
	if (this->Energy_point <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " didn't have enough energy point to attack\n";
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", " << "causing " << this->Attack_damage << " points of damage\n";
	this->Energy_point--;
}