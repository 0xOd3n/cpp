/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:20:28 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/07 22:47:22 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	private:
				Weapon	weapon_B;
				std::string name;
	public:
				HumanB();
				~HumanB();
				HumanB(std::string Name);
				void	setWeapon(Weapon New_weapon);
				void	attack();
};

# endif