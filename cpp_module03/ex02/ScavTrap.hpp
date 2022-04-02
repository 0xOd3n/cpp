/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:49:10 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/01 19:22:14 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
				ScavTrap();
				ScavTrap(std::string name);
				ScavTrap(const ScavTrap& copy);
				~ScavTrap();
				ScavTrap&	operator=(const ScavTrap& cpy);
				void	guardGate();
};

# endif