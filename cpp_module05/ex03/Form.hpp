/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:26:01 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 22:56:14 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
				const std::string	_name;
				bool				_is_signed;
				const int			_sign_grade;
				const int			_exc_grade;
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
				class FormUnsignedException : public std::exception
				{
					public:
						const char* what() const throw();
				};
				Form();
				Form(const std::string& name, const int& sign_grade, const int& exc_grade);
				Form(const Form& copy);
				Form& operator=(const Form& copy);
				virtual ~Form();
				std::string		getName() const;
				bool			get_signed() const;
				int				get_signed_grade() const;
				int				get_exc_grade() const;
				void			beSigned(const Bureaucrat& bureaucrat);
				virtual void	Action() const = 0;
				void			execute(Bureaucrat const& executor) const;
};

std::ostream& operator<<(std::ostream& out, const Form& form);

# endif