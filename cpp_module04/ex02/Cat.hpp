/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 20:04:25 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 18:03:55 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain* brain;

	public :
		Cat();
		Cat(const Cat& copy);
		virtual ~Cat();
		Cat& operator=(const Cat& copy);
		virtual void	makeSound() const;
		void	set_ideas(std::string idea, int i);
		void	display_ideas(int i);
};

#endif