/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:33:29 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 21:06:52 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCRATIONFORM_HPP
# define SHRUBBERYCRATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private :
                std::string _target;

    public :
                ShrubberyCreationForm();
                ShrubberyCreationForm(const std::string& target);
                ShrubberyCreationForm(const ShrubberyCreationForm& copy);
                ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
                ~ShrubberyCreationForm();
                std::string getTarget() const;
                void			Action() const;
};
#endif
