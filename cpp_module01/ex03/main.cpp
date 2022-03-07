/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 21:33:08 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/07 21:55:24 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club A");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club A");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club B");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club B");
		jim.attack();
	}
	return 0;
}