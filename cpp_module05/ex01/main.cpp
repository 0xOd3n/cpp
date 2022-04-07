/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:24:21 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/07 01:23:38 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try 
	{
		std::cout << "=============increment========\n\n";
		Bureaucrat noble("Bureaucrat1", 2);
		std::cout << noble;
		noble.increment();
		noble.increment();
		std::cout << noble;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// try
	// {
	// 	std::cout << "\n=============decrement========\n\n";
	// 	Bureaucrat noble("Bureaucrat2", 10);
	// 	std::cout << noble;
	// 	noble.decrement();
	// 	std::cout << noble;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	// try
	// {
	// 	std::cout << "\n=============decrement Catch========\n\n";
	// 	Bureaucrat noble("Bureaucrat2", 150);
	// 	std::cout << noble;
	// 	noble.decrement();
	// 	std::cout << noble;
	// 	std::cout << "\n==============================\n\n";
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	try
	{
		std::cout << "\n=============default========\n\n";
		Bureaucrat noble;
		std::cout << noble;
		noble.decrement();
		std::cout << noble;
		std::cout << "\n==============================\n\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
}