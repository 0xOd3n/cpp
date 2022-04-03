/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:13:04 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/02 21:16:19 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal 
{
	private :

	protected :
				std::string _type;

	public :
				Animal();
				Animal(std::string& type);
				Animal(const Animal& copy);
				~Animal();
				Animal&	operator=(const Animal& copy);
};

# endif