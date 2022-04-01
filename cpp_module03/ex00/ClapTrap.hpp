/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:33:52 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/01 17:43:29 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private : 
				std::string _name;
				int	Hit_point;
				int Energy_point;
				int	Attack_damage;
	public :
				ClapTrap();
				ClapTrap(const std::string& name);
				ClapTrap(ClapTrap& copy);
				~ClapTrap();
				ClapTrap& operator=(const ClapTrap& copy);
				void attack(const std::string& target);
				void takeDamage(unsigned int amount);
				void beRepaired(unsigned int amount);
};

#endif