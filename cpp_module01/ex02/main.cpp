/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:25:54 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/06 21:46:17 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string		str;
	std::string		*ptr;
	std::string&	ref = str;

	str = "HI THIS IS BRAIN";
	ptr = &str;
	
	std::cout << "str adress : " << &str << std::endl;
	std::cout << "ptr adress : " << &ptr << std::endl;
	std::cout << "ref adress : " << &ref << std::endl;
	std::cout << std::endl;
	std::cout << "str value : " << str << std::endl;
	std::cout << "ptr value : " << ptr << std::endl;
	std::cout << "ref value : " << ref << std::endl;
}