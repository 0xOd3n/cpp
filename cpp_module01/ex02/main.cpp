/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:25:54 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/12 19:45:00 by abbelhac         ###   ########.fr       */
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

	std::cout << "memory adress of str : " << &str << std::endl;
	std::cout << "memory adress held by stringPTR : " << stringPTR << std::endl;
	std::cout << "memory adress held by stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "str value : " << str << std::endl;
	std::cout << "value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF : " << stringREF << std::endl;
}