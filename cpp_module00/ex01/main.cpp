/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:39:00 by abbelhac          #+#    #+#             */
/*   Updated: 2022/02/19 20:02:46 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	search(int idx, bool full, Phonebook& phonebook)
{

}

int main()
{
	Phonebook phonebook;
	int i = 0;
	std::string input;
	while (1)
	{
		std::cout << "Enter a command" << std::endl;
		if (!getline(std::cin, input))
			exit (0);
		if (input == "ADD")
			phonebook.Add();
		else if (input == "SEARCH")
			std::cout << "search\n";
		else if (input == "EXIT")
			exit (0);
		else
			std::cout << "CMD not found" << std::endl;
		i++;
		// phonebook.Display(i);
		// std::cin >> input >> age;
		// std::cout << input << std::endl;
	}
}

