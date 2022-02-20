/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:39:00 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/21 00:28:36 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook phonebook;
	std::string input;
	
	while (1)
	{
		std::cout << "Enter a command" << std::endl;
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
			std::cout << "CMD not found" << std::endl;
		// phonebook.Display(i);
		// std::cin >> input >> age;
		// std::cout << input << std::endl;
	}
}

