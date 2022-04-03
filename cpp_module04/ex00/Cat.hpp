/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:04:25 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/02 20:33:59 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{	
	public :
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& copy);
		~Cat();
		void	makesound();
};