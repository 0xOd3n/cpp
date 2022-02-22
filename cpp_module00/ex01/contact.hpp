/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:33:38 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/21 23:00:40 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#define RED "\e[91m"
#define BLU "\e[34m"
#define GRN "\e[92m"
#define MAG "\e[95m"
#define WIT "\e[0m"
#define CYN "\e[96m"

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
		void	Search(int idx);
		void	get_line(std::string& input, std::string msg);
		std::string Check_num(std::string phone);
};