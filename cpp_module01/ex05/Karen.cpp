/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:55:59 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/12 20:18:44 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]\n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void	Karen::info( void )
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	
}
void	Karen::warning( void )
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	
}
void	Karen::error( void )
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable! I want to speak to the manager now." << std::endl;
	
}

void	Karen::complain(std::string level)
{
	std::string lvl[4];

	int i = 0;

	lvl[0] = "DEBUG";
	lvl[1] = "INFO";
	lvl[2] = "WARNING";
	lvl[3] = "ERROR";
	ptr[0] = &Karen::debug;
	ptr[1] = &Karen::info;
	ptr[2] = &Karen::warning;
	ptr[3] = &Karen::error;
	
	while (i < 4 && level != lvl[i])
		i++;
	if (i < 4)
		(this->*ptr[i])();	
}