/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:33:38 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/19 20:01:22 by abbelhac         ###   ########.fr       */
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
		Contact();
		~Contact();
		void	Add();
		void	Display();
		void	Search(int i);
		void	get_line(std::string& input);
		std::string Check_num(std::string phone);
};