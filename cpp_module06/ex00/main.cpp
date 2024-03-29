/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:25:50 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/11 02:17:57 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int main(int ac, char **av)
{
   
    if (ac == 2)
    {
        char_converter(av[1]);
        int_converter(av[1]);
        float_converter(av[1]);
        double_converter(av[1]);
    }
    else
        std::cerr << "Error : Inavlid Parameter\n";
    return (0);
}