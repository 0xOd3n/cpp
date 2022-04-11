/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:21:28 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/11 01:13:26 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>

struct	Data
{
	int 	i;
	std::string	str;
};

uintptr_t       serialize(Data* ptr);
Data*           deserialize(uintptr_t raw);

# endif