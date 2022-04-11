/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 01:46:39 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/11 01:51:11 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base*	generate(void)
{
	Base*	base;
	int		random;

	srand (time(NULL));
	random = rand() % 3;
	switch (random)
	{
		case 0:
			base = new A;
			break;
		case 1:
			base = new B;
			break;
		case 2:
			base = new C;
			break;
	}
	return (base);
}
