/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:46:28 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/11 02:44:04 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

void	identify(Base* p)
{
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "A\n";
	else if (b)
		std::cout << "B\n";
	else if (c)
		std::cout << "C\n";
	else
		std::cout << "None of the derived Classes\n";
}

void	identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A\n";
		(void)a;
		return ;
	}
	catch (const std::exception& e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B\n";
		(void)b;
		return ;
	}
	catch (const std::exception& e){}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C\n";
		(void)c;
		return ;
	}
	catch (const std::exception& e){}
	std::cout << "None of the derived Classes\n";
}
