/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:39:00 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/22 03:03:57 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook phonebook;
	std::string input;
	int counter = 0;
	
	while (1)
	{
		std::cout << GRN << "Enter a command\n" << WIT << std::endl;
		if (!getline(std::cin, input))
			exit (0);
		if (input == "ADD")
			phonebook.Add();
		else if (input == "SEARCH")
		{
			std::cout << "search\n";
			phonebook.Search();
		}
		else if (input == "EXIT")
			exit (0);
		else
		{
			std::cout << RED << "\nCommand not found\n" << WIT << std::endl;
			while (++counter < 1000000000);
			counter = 0;
			std::system("clear");
		}
	}
}

