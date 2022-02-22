/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 04:15:47 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/22 04:42:43 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
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
};

#endif