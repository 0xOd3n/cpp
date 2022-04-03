/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:33:48 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/02 23:06:42 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap p1("player1");
	ScavTrap p2("player2");
	ScavTrap p3(p2);
	p3.attack(p1.get_name());
	p3.takeDamage(8);
	p3.takeDamage(1);
	p3.attack("player3");
	p3.beRepaired(10);
	p3.takeDamage(10);
	p1.guardGate();
	p1.ClapTrap::attack("abb");
}