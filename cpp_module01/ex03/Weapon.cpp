/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:55:21 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/08 17:41:42 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{
	
}

Weapon::Weapon(const std::string& weapon_type)
{
	type = weapon_type;
}

const std::string&	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string str)
{
	type = str;
}