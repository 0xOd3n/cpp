/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:13:13 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/12 20:10:59 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
				Weapon&	Weapon_A;
				std::string Name;
	public:
				~HumanA();
				HumanA(std::string Name, Weapon& WeaponA);
				void	attack();
};

# endif