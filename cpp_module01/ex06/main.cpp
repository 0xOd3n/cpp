/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:56:09 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/11 18:53:50 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "\033[1;31mError!\n\033[0mInvalid Parameters" << std::endl;
		return (1);
	}
	Karen karen;
	std::string lvl = av[1];
	karen.complain(lvl);
}