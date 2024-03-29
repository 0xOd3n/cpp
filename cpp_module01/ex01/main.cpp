/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 04:45:14 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/12 19:34:58 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

int main()
{
	int i = 0;
	int N = 5;
	Zombie *z_ptr;
	z_ptr = zombieHorde(N, "Zombos");

	while (z_ptr && i < N)
	{
		z_ptr[i++].announce();
	}	
	delete[] z_ptr;
}