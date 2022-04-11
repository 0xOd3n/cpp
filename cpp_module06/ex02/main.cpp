/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:42:01 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/11 02:48:05 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

int		main()
{
	Base*	base;
	// Base*	pbase = new Base();
	base = generate();

	std::cout << "Identify real type using pointers!!\n";
	identify(base);
	std::cout << "Identify real type using reference!!\n";
	identify(*base);
	
	return (0);
}
