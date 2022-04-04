/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:13:04 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 17:59:17 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
	protected :
				std::string _type;

	public :
				Animal();
				Animal(const std::string& type);
				Animal(const Animal& copy);
				virtual ~Animal();
				Animal&	operator=(const Animal& copy);
				std::string	getType() const;
				virtual void	makeSound() const;
};

# endif