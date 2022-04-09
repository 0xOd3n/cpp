/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:20:02 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 02:29:34 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat 
{
	private :
				const std::string	_name;
				int					_grade;
	public :
				class GradeTooHighException : public std::exception
				{
					public:
							const char* what() const throw();
				};
				class GradeTooLowException : public std::exception
				{
					public:
							const char* what() const throw();
				};
				Bureaucrat();
				Bureaucrat(const std::string& name, int grade);
				Bureaucrat(const Bureaucrat& copy);
				Bureaucrat&	operator=(const Bureaucrat& copy);
				~Bureaucrat();
				std::string getName() const;
				int	getGrade() const;
				void	increment();
				void	decrement();
				void	signForm(Form& form);
				void	executeForm(Form const& form);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj);

#endif