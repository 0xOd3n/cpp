/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 04:15:44 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/22 21:55:10 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{ 
	std::cout << "\n" << CYN << this->name << WIT << " has been distructed\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << CYN << this->name << " : " << MAG << "BraiiiiiiinnnzzzZ..." << WIT << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}