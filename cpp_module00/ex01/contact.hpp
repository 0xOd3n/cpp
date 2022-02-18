/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:33:38 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/18 22:33:43 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private :
		std::string fname;
		std::string lname;
		std::string phone;
		std::string nickname;
		std::string dsecret;
	public :
		void	Add();
		void	Display();
		std::string Check_num(std::string phone);
};