/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:33:50 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/01 19:36:01 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called\n";
	this->_name = "no name";
	this->Hit_point = 10;
	this->Energy_point = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << "ClapTrap Constructor called\n";
	this->_name = name;
	this->Hit_point = 10;
	this->Energy_point = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
	std::cout << "ClapTrap Copy constructor called\n";
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Desctructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "ClapTrap Assingnement operator called\n";
	if (this == &copy)
		return (*this);
	this->_name = copy._name;
	this->Hit_point = copy.Hit_point;
	this->Energy_point = copy.Energy_point;
	this->Attack_damage = copy.Attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->Hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead\n";
		return ;
	}
	if (this->Energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " didn't have enough energy point to attack\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", " << "causing " << this->Attack_damage << " points of damage\n";
	this->Energy_point--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage\n";
	this->Hit_point -= amount;
	if (this->Hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead\n";
		this->Hit_point = 0;
		return ;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->Hit_point << std::endl;
	if (this->Hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead\n";
		return ;
	}
	if (this->Energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " didn't have enough energy point to repair\n";
		return ;
	}
	this->Energy_point--;
	this->Hit_point += amount;
	std::cout << "ClapTrap " << this->_name << " repaired " << amount << " points\n";
}