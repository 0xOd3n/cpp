/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:24:11 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/11 00:38:49 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	data_ptr;

	data_ptr = reinterpret_cast<uintptr_t>(ptr);
	std::cout << ptr << " | " << data_ptr << std::endl;
	return (data_ptr);
}