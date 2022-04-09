/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 23:24:21 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 22:53:49 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		// ShrubberyCreationForm	shrubbery("Home");
		// std::cout << "--------- shrubbery -----------\n" << std::endl;
		// shrubbery.Action();

		// std::cout << "\n--------- Roboto -----------\n" << std::endl;
		// RobotomyRequestForm		robot("Roboto-san");
		// robot.Action();

		// std::cout << "\n--------- president -----------\n" << std::endl;
		// PresidentialPardonForm		president("Manager");
		// president.Action();


		// std::cout << "\n--------- execute -----------\n" << std::endl;
		// Bureaucrat	bureaucrat("Director", 6);
		// bureaucrat.signForm(president);
		// bureaucrat.executeForm(president);
		{
			Intern someRandomIntern;
			Form* rrf;
			rrf = someRandomIntern.makeForm("pesidential pardon", "Bender");
			delete rrf;
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}