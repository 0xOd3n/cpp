/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 04:15:47 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/22 21:59:40 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define RED "\e[91m"
#define BLU "\e[34m"
#define GRN "\e[92m"
#define MAG "\e[95m"
#define WIT "\e[0m"
#define CYN "\e[96m"

#include <iostream>

class Zombie
{
	private:
			std::string name;
	public:
			Zombie();
			~Zombie();
			Zombie(std::string name);

			void	announce(void);
			void	set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif