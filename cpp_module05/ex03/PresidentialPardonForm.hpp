/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:33:36 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 21:06:55 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private :
                std::string _target;

    public :
                PresidentialPardonForm();
                PresidentialPardonForm(const std::string& target);
                PresidentialPardonForm(const PresidentialPardonForm& copy);
                PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
                ~PresidentialPardonForm();
                std::string getTarget() const;
                void			Action() const;
};
#endif
