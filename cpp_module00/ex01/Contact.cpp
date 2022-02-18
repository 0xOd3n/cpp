/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:46:29 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/18 22:36:57 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

std::string	Contact::Check_num(std::string phone)
{
	int i  = 0;

	while (phone[i])
	{
		if (!isdigit(phone[i]))
		{
			std::cout << "phone number numaber must contain only numbers" << std::endl;
			if (!getline(std::cin, phone))
				exit (0);
			i = 0;
		}
		i++;		
	}
	return (phone);
}

void	Contact::Add()
{
	std::cout << "first name :";
	getline(std::cin,this->fname);
	std::cout << "last name :";
	getline(std::cin,this->lname);
	std::cout << "phone number :";
	getline(std::cin,this->phone);
	this->phone = Check_num(this->phone);
	std::cout << "nickname :";
	getline(std::cin,this->nickname);
	std::cout << "darksecret :";
	getline(std::cin,this->dsecret);
}

void	Contact::Display()
{
	std::cout << "first name :" << this->fname << std::endl;
	std::cout << "last name :" << this->lname << std::endl;
	std::cout << "phone number :" << this->phone << std::endl;
	std::cout << "nickname :" << this->nickname << std::endl;
	std::cout << "dark secret :" << this->dsecret << std::endl;
}