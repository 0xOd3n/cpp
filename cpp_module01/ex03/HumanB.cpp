/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:09:39 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/08 18:00:40 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	
}

HumanB::~HumanB()
{
	
}

HumanB::HumanB(std::string Name)
{
	name = Name;
}

void	HumanB::setWeapon(Weapon& new_weapon)
{
	weapon_B = &new_weapon;	
}

void	HumanB::attack()
{
	std::cout << "Human B \n" << name << " attacks with their " << weapon_B->getType() << std::endl;
}
