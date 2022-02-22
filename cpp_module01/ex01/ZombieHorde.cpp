/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:21:54 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/22 21:59:17 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	std::string tmp;
	int i = 0;
	Zombie *ptr;
	if (name.empty())
		return (nullptr);
	ptr = new Zombie[N];

	while (i < N)
	{
		tmp = name;
		tmp.append(std::to_string(i));
		ptr[i].set_name(tmp);
		i++;
	}
	return (ptr);
}