/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:33:47 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/19 20:01:06 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	cnt = -1;
}
Phonebook::~Phonebook()
{

}

void	Phonebook::Add()
{
	if (this->cnt < 7)
		this->cnt++;
	else
		this->cnt = 0;
	Contacts[this->cnt].Add();
}

void	Phonebook::Display(int idx)
{
	Contacts[idx].Display();
}

void	Phonebook::Search(int cnt)
{
	int i = 0;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|first name| last name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < cnt)
	{
		Contacts[i].Search(i);
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}