/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:26:05 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 02:37:32 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""),_is_signed(0), _sign_grade(0), _exc_grade(0)
{
	throw GradeTooHighException();
}

Form::Form(const std::string& name, const int& sign_grade, const int& exc_grade)
	: _name(name), _is_signed(0), _sign_grade(sign_grade), _exc_grade(exc_grade)
{
	if (sign_grade < 1 || sign_grade > 150 || exc_grade < 1 || exc_grade > 150)
		std::cout << this->getName();
	if (sign_grade < 1 || exc_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150 || exc_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& copy)
	: _name(copy._name), _sign_grade(copy._sign_grade), _exc_grade(copy._exc_grade)
{
	*this = copy;
}

Form&	Form::operator=(const Form& copy)
{
	if (this != &copy)
		_is_signed = copy.get_signed();
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const Form& form)
{
	out << form.getName() << " form has " << form.get_signed_grade() << " grade to sign and "
	<< form.get_exc_grade() << " grade to execute. The current form state is ";
	(form.get_signed() ? out << "signed\n" : out << "not signed\n");
	return (out);
}

const char*		Form::GradeTooHighException::what() const throw()
{
	return ("Form grade is too high!");
}

const char*		Form::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low!");
}

const char*		Form::FormUnsignedException::what() const throw()
{
	return ("is not signed!");
}

std::string	Form::getName() const
{
	return (_name);
}

bool		Form::get_signed() const
{
	return (_is_signed);
}

int			Form::get_signed_grade() const
{
	return (_sign_grade);
}

int			Form::get_exc_grade() const
{
	return (_exc_grade);
}

void		Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_sign_grade)
		throw GradeTooLowException();
	this->_is_signed = 1;
}

void		Form::execute(Bureaucrat const& executor) const
{
	if (!get_signed())
		throw FormUnsignedException();
	else if (this->_exc_grade < executor.getGrade())
		throw GradeTooHighException();
	this->Action();
}

Form::~Form()
{
}
