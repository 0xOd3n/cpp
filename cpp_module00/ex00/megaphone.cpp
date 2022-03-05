/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:38:38 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/05 21:06:42 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac < 2 )
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int j;
	int i;

	j = 1;
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			av[j][i] = toupper(av[j][i]);
			std::cout << av[j][i];
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return (0);
}