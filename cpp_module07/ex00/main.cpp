/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:52:00 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/12 03:08:39 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{

std::cout << "========================= Class ===================\n\n";
Awesome A(1337);
Awesome B (42);

std::cout << "obj A : " << A.get_n() << " obj B : " << B.get_n() << "\n\n";
::swap(A, B);
std::cout << "obj A : " << A.get_n() << " obj B : " << B.get_n() << "\n\n";
std::cout << "Min(A, B) : " << ::min(A, B) << "\n\n";
std::cout << "MAX(A, B) : " << ::max(A, B) << "\n\n";

std::cout << "========================= Int ===================\n\n";
int a = 2;
int b = 3;
std::cout << "a = " << a << ", b = " << b << std::endl;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

std::cout << "\n========================= String ===================\n\n";
std::string c = "chaine1";
std::string d = "chaine2";
std::cout << "c = " << c << ", d = " << d << std::endl;
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}