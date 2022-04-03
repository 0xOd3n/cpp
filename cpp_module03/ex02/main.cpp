/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:33:48 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 00:20:43 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap p1("player 1");
	FragTrap p2("player 2");
	FragTrap p3(p2);
	p3.attack(p1.get_name());
	p1.highFivesGuys();
	p1.attack("pp");
}