/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:46:29 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/22 02:53:09 by abbelhac         ###   ########.fr       */
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
			std::cout << MAG << "\nWarning! : Phone number must contain only numbers\n" << WIT << std::endl;
			get_line(phone, "Enter phone number : ");
			i = -1;
		}
		++i;
	}
	return (phone);
}

void	Contact::get_line(std::string& input, std::string msg)
{
	std::cout << GRN << msg << WIT;
	while (1)
	{
		if (!getline(std::cin, input))
			exit (0);
		if (input.empty())
		{
			std::cout << MAG << "\nEmpty field try again\n" << WIT << std::endl;
			std::cout << GRN << msg << WIT;
			continue;
		}
		else
			break;
	}
}

void	Contact::Add()
{
	std::system("clear");
	get_line(this->fname, "Enter first name : ");
	get_line(this->lname, "Enter last name : ");
	get_line(this->phone, "Enter phone number : ");
	this->phone = Check_num(this->phone);
	get_line(this->nickname, "Enter nickname : ");
	get_line(this->dsecret, "Enter darksecret : ");
	std::system("clear");
}

void	print_field(std::string field)
{
	int i = -1;

	if (field.length() > 10)
	{
		while (++i < 9)
			std::cout << field[i];
		std::cout << "." << BLU << "|" << WIT;
	}
	else
		std::cout << std::setw(10) << field << BLU << "|" << WIT;
}

void	Contact::Search(int idx)
{
	std::cout << BLU << "|" << WIT << std::setw(10) << idx << BLU << "|" << WIT;
	print_field(this->fname);
	print_field(this->lname);
	print_field(this->nickname);
	std::cout << std::endl;
}

void	Contact::Display()
{
	std::cout << std::endl;
	std::cout << CYN << "first name : " << WIT << this->fname << std::endl;
	std::cout << CYN << "last name : " << WIT << this->lname << std::endl;
	std::cout << CYN << "phone number : " << WIT << this->phone << std::endl;
	std::cout << CYN << "nickname : " << WIT << this->nickname << std::endl;
	std::cout << CYN << "dark secret : " << WIT << this->dsecret << std::endl;
	std::cout << std::endl;
}