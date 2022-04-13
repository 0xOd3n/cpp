/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:01:53 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/13 01:47:31 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <deque>

class occurence_not_found : public std::exception
{
    public :
            const char* what() const throw()
            {
                return ("OCCURENCE NOT FOUND");
            }
};

template <typename T>
void    easyfind(T tmp, int i)
{
    typename T::iterator  it;
    it = std::find(tmp.begin(), tmp.end(), i);
    if (it == tmp.end())
        throw occurence_not_found();
    std::cout << "OCCURENCE FOUND\n";
}

#endif