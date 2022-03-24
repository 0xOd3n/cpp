/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:29:12 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/24 22:53:47 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
int main( void )
{
	Fixed a;
	Fixed b(42.f);
	Fixed c(133);
	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;
	return 0;
}