/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:25:54 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/07 16:25:03 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string		str;
	std::string		*stringPTR;
	std::string&	stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	
	std::cout << "str adress : " << &str << std::endl;
	std::cout << "ptr adress : " << stringPTR << std::endl;
	std::cout << "ref adress : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "str value : " << str << std::endl;
	std::cout << "ptr value : " << *stringPTR << std::endl;
	std::cout << "ref value : " << stringREF << std::endl;
}