/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:39:00 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/18 22:54:32 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook phonebook;
	int i = 0;
	std::string input;
	while (1)
	{
		if (!getline(std::cin, input))
			exit (0);
		if (input == "ADD")
			phonebook.Contacts[i].Add();
		else if (input == "SEARCH")
			std::cout << "search\n";
		else if (input == "EXIT")
			exit (0);
		phonebook.Contacts[i].Display();
		i++;
		// std::cin >> input >> age;
		// std::cout << input << std::endl;
	}
}

