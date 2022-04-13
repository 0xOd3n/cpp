/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:01:52 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/13 01:48:29 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main()
{
	std::vector<int>	vect;
    std::deque<int>     deq;
	int					length;
	int					i;

    std::cout << "\n============= vector ===============\n\n";
    
	i = -1;
	length = 5;
	while (++i < length)
		vect.push_back(i);
	try
	{
		easyfind<std::vector<int> >(vect, 0);
		easyfind<std::vector<int> >(vect, 4);
		easyfind<std::vector<int> >(vect, 1);
		easyfind<std::vector<int> >(vect, 5);
		easyfind<std::vector<int> >(vect, 2);
	}
	catch(const std::exception& e){std::cerr << e.what() << '\n';}
    
    std::cout << "\n============= deque ===============\n\n";
    
    i = -1;
    while (++i < length)
        deq.push_back(i);
    try
    {
        easyfind<std::deque<int> >(deq, 0);
		easyfind<std::deque<int> >(deq, 4);
		easyfind<std::deque<int> >(deq, 1);
		easyfind<std::deque<int> >(deq, 5);
		easyfind<std::deque<int> >(deq, 2);
    }
	catch(const std::exception& e){std::cerr << e.what() << '\n';}
	return (0);
}