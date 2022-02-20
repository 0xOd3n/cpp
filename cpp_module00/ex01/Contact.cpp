/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:46:29 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/21 00:49:42 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

std::string	Contact::Check_num(std::string phone)
{
	int i  = 0;

	while (phone[i])
	{
		if (!isdigit(phone[i]))
		{
			std::cout << "Warning! : Phone number must contain only numbers" << std::endl;
			if (!getline(std::cin, phone))
				exit (0);
			i = 0;
		}
		i++;
	}
	return (phone);
}

void	Contact::get_line(std::string& input, std::string msg)
{
	std::cout << msg;
	while (1)
	{
		if (!getline(std::cin, input))
			exit (0);
		if (input.empty())
		{
			std::cout << "Empty field try again" << std::endl;
			std::cout << msg;
			continue;
		}
		else
			break;
	}
}

void	Contact::Add()
{
	get_line(this->fname, "Enter first name :");
	get_line(this->lname, "Enter last name :");
	get_line(this->phone, "Enter phone number :");
	this->phone = Check_num(this->phone);
	get_line(this->nickname, "Enter nickname :");
	get_line(this->dsecret, "Enter darksecret :");
}

void	Contact::Search(int idx)
{
	std::cout << "|" << std::setw(10) << idx << "|\n";
	std::
}

void	Contact::Display()
{
	std::cout << "first name :" << this->fname << std::endl;
	std::cout << "last name :" << this->lname << std::endl;
	std::cout << "phone number :" << this->phone << std::endl;
	std::cout << "nickname :" << this->nickname << std::endl;
	std::cout << "dark secret :" << this->dsecret << std::endl;
}