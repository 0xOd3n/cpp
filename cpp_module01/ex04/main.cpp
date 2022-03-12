/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:16:53 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/09 19:54:42 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	replace(char **av, std::string& line)
{
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ofstream new_file(filename.append(".replace"));
	size_t pos = 0;
	
	if (!new_file.is_open())
	{
		std::cerr << "\033[1;31mError\n\033[0mCan't open the file.replace" << std::endl;
		return(1);
	}
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos += s2.length(); 
	}
	new_file << line;
	new_file.close();
	return(0);
}

int main(int ac, char **av)
{
	std::ifstream	file;
	std::ostringstream ss;
	std::string		line;

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
	ss << file.rdbuf();
	line = ss.str();
	file.close();
	if (replace(av, line))
		return (1);
	return (0);
}