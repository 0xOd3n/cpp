/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:20:03 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 02:35:13 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(0)
{
	throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1 || grade > 150)
		std::cout << this->getName();
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Out of Range : grade is too high");
}
const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Out of Range : grade is too low");
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name)
{
	*this = copy;
}

void	Bureaucrat::decrement()
{
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}


void	Bureaucrat::increment()
{
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat&	Bureaucrat::operator= (const Bureaucrat& copy)
{
	if (this != &copy)
		_grade = copy.getGrade();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj)
{
	out << obj.getName() << ",  bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}

Bureaucrat::~Bureaucrat()
{
	
}

void	Bureaucrat::signForm(Form& form)
{
	form.beSigned(*this);
	if (form.get_signed())
		std::cout << this->_name << " signed " << form.getName() << "\n";
	else
		std::cout << this->_name << " couldn’t sign " << form.getName() << " because is higher\n";
}


void		Bureaucrat::executeForm(Form const& form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << " form\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " failed to execute " << form.getName() << " form because " << form.getName() <<  " " << e.what() << '\n';
	}
}