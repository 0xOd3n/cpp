/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 04:45:14 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/22 04:52:26 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

int main()
{
	Zombie Zombie1("Ryoma");
	Zombie Zombie2("Rambos");
	Zombie1.announce();
	Zombie2.announce();
}