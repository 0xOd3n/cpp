/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:17:48 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 22:29:18 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
	public:
		class FormNameNotfoundException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Intern();
		Intern(const Intern& copy);
		Intern& operator = (const Intern& copy);
		~Intern();
		Form	*makeForm(std::string name, std::string target);
};

#endif