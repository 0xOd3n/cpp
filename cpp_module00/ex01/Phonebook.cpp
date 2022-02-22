/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:33:47 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/22 03:01:28 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	cnt = -1;
	is_full = false;
}
Phonebook::~Phonebook()
{

}

void	Phonebook::Add()
{
	if (this->cnt < 7)
		this->cnt++;
	else
	{
		is_full = true;
		this->cnt = 0;
	}
	Contacts[this->cnt].Add();
}

void	Phonebook::Display(int idx)
{
	int counter = 0;
	if (idx < 0 || (idx > cnt && !is_full) || idx > 7)
	{
		std::cout << RED << "Contact not found\n" << WIT;
		while (counter++ < 1000000000);
		std::system("clear");
		return;
	}
	Contacts[idx].Display();
}

int	Phonebook::get_index()
{
	std::string index;
	int i = 0;
	
	this->Contacts->get_line(index, "Enter an index : ");
	while (index[i])
	{
		if (!isdigit(index[i]))
		{
			if ((i == 0 && (index[i] == '-' || index[i] == '+')))
			{
				i++;
				continue;
			}
			std::cout << MAG <<"\nyou should enter a digit\n\n" << WIT;
			this->Contacts->get_line(index, "Enter an index : ");
			i = 0;
		}
		i++;
	}
	return (atoi(index.c_str()));
}

void	Phonebook::Search()
{
	int count;
	int i = -1;
	
	std::system("clear");
	if (this->cnt == -1)
	{
		std::cout << MAG << "There is no contact in the phonebook, try to add some contacts\n\n" << WIT;
		return;
	}
	std::system("clear");
	std::cout << BLU << "---------------------------------------------" << GRN << std::endl;
	std::cout << BLU << "|" GRN << "     Index" << BLU << "|"
		<< GRN << "first name" << BLU << "|"
		<< GRN << " last name" << BLU << "|"
		<< GRN << "  nickname" << BLU << "|" << std::endl;
	std::cout << "---------------------------------------------"<< WIT << std::endl;
	if (is_full)
		count = 7;
	else
		count = this->cnt;
	while (++i <= count)
		Contacts[i].Search(i);
	std::cout << BLU <<"---------------------------------------------" << WIT << std::endl;
	Display(get_index());
}