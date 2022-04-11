/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:24:53 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/10 22:07:56 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

Data*		deserialize(uintptr_t raw)
{
	Data	*data_ptr;

	data_ptr = reinterpret_cast<Data*>(raw);
	return (data_ptr);
}