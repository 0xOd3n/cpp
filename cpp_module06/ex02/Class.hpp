/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:42:39 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/11 01:51:01 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

#include <iostream>
#include <string>
#include <time.h>
#include <exception>

class Base
{
    public :
                virtual ~Base(){};
};

class A : public Base
{
    
};

class B : public Base
{
    
};

class C : public Base
{

};

Base*       generate(void);
void        identify(Base* p);
void        identify(Base& p);

#endif