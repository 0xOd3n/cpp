/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 04:45:14 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/22 16:03:44 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

int main()
{
	Zombie *z_ptr;
	Zombie Zombie1("Ryoma");
	z_ptr = newZombie("Zombos");
	Zombie1.announce();
	z_ptr->announce();
	randomChump("ZAX");
	delete z_ptr;
}