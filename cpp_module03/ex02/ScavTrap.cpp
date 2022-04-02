/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:12:41 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/01 19:41:03 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
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

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy)
{
	std::cout << "ScavTrap Assignment operator called\n";
	if (this == &cpy)
		return (*this);
	this->_name = cpy._name;
	this->Hit_point = cpy.Hit_point;
	this->Energy_point = cpy.Energy_point;
	this->Attack_damage = cpy.Attack_damage;
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