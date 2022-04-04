/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:13:04 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 18:18:21 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected :
				std::string _type;

	public :
				WrongAnimal();
				WrongAnimal(const std::string& type);
				WrongAnimal(const WrongAnimal& copy);
				~WrongAnimal();
				WrongAnimal&	operator=(const WrongAnimal& copy);
				std::string	getType() const;
				void	makeSound() const;
};

# endif