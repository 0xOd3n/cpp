/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:16:53 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/08 20:13:19 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::ifstream	file;
	std::string		fl_content;

	if (ac != 4)
	{
		std::cerr << "\033[1;31mError!\n\033[0mInvalid Parameters" << std::endl;
		return (1);
	}
	file.open(av[1]);
	if (!file.is_open())
	{
		std::cerr << "\033[1;31mError\n\033[0mCan't open the file" << std::endl;
		return (1);
	}
	getline(file, fl_content, '\0');
	std::cout << fl_content << std::endl;
}