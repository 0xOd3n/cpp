/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:33:47 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/21 00:48:53 by abbelhac         ###   ########.fr       */
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
	Contacts[idx].Display();
}

void	Phonebook::Search()
{
	int cnt;
	int i = -1;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	if (is_full)
	{
		// std::cout << "contact is full ]\n";
		cnt = 7;
	}
	else
		cnt = this->cnt;
	while (++i <= cnt)
		Contacts[i].Search(i);
	std::cout << "---------------------------------------------" << std::endl;
}