/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:33:50 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/02 22:30:45 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";
	this->_name = "";
	this->Hit_point = 10;
	this->Energy_point = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << "Constructor called\n";
	this->_name = name;
	this->Hit_point = 10;
	this->Energy_point = 10;
	this->Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Desctructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "Assingnement operator called\n";
	if (this == &copy)
		return (*this);
	this->_name = copy._name;
	this->Hit_point = copy.Hit_point;
	this->Energy_point = copy.Energy_point;
	this->Attack_damage = copy.Attack_damage;
	return (*this);
}

const std::string&	ClapTrap::get_name()
{
	return (this->_name);
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