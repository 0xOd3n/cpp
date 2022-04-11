/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:42:25 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/11 01:16:05 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"


int		main()
{
	Data	*data = new Data;
	uintptr_t	ptr;

	data->i = 42;
	data->str = "1337";

	std::cout << data->i << " | " << data->str << std::endl;
	ptr = serialize(data);
	std::cout << ptr << " | " << data << std::endl;

	data = deserialize(ptr);
	std::cout << data << " | " << data->i << " | " << data->str << std::endl;
	return (0);
}
