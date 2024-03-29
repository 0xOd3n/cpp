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
#include "Form.hpp"

int main()
{


	try
	{

		// Bureaucrat	obj;
		std::cout << "------------------------------------\n";
		Form        form("", 5, 6);
		Bureaucrat	bureaucrat("Director", 5);
		std::cout << bureaucrat;
		std::cout << form;
		form.beSigned(bureaucrat);
		bureaucrat.signForm(form);
		std::cout << form;
		std::cout << "\n---------------------------------\n";
		bureaucrat.decrement();
		std::cout << bureaucrat;
		bureaucrat.increment();

		Form        form1("Competiton1", 5, 6);
		form1.beSigned(bureaucrat);
		bureaucrat.signForm(form1);
		std::cout << form1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}