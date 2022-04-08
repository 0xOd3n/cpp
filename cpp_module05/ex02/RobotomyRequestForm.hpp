/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:33:32 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/08 02:07:33 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private :
                std::string _target;

    public :
                RobotomyRequestForm();
                RobotomyRequestForm(const std::string& target);
                RobotomyRequestForm(const RobotomyRequestForm& copy);
                RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
                ~RobotomyRequestForm();
                std::string getTarget() const;
                void			Action() const;
};