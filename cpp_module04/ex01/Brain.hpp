/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:59:08 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/03 22:59:19 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private :
				std::string ideas[100];
	public :
				Brain();
				Brain(const Brain& copy);
				~Brain();
				Brain& operator=(const Brain& copy);
				void	set_ideas(std::string idea, int i);
				const std::string& get_ideas(int i) const;
};

# endif