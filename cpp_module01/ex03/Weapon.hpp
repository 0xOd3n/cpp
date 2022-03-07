/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:55:59 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/07 22:38:07 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>


class Weapon
{
	private:
				std::string	type;
	public:
				Weapon();
				Weapon(const std::string weapon_type);
				~Weapon();
				const std::string&		getType();
				void	setType(std::string str);
};

# endif