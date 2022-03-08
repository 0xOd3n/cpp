/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:17:30 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/08 18:07:28 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
	
}
HumanA::HumanA(std::string NameA, Weapon& WeaponA) : Weapon_A(WeaponA)
{
	Name = NameA;
}

void	HumanA::attack()
{
	std::cout << "Human A \n" << Name << " attacks with their " << Weapon_A.getType() << std::endl;
}