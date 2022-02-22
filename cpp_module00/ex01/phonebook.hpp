/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:35:54 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/21 19:25:56 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class Phonebook
{
	private :
		Contact Contacts[8];
		int		cnt;
		bool	is_full;
	public :
		Phonebook();
		~Phonebook();
		void	Add();
		void	Display(int idx);
		void	Search();
		int		get_index();
};