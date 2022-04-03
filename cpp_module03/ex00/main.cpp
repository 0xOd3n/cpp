/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:33:48 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/02 22:33:52 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap p1("player1");
	ClapTrap p2("player2");
	ClapTrap p3(p2);
	p3.attack(p1.get_name());
	p3.takeDamage(8);
	p3.takeDamage(1);
	p3.attack("ply3");
	p3.takeDamage(10);
	p3.beRepaired(10);
}