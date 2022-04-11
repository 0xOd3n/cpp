/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:43:12 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/10 16:45:08 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>

void	char_converter(const std::string& str);
void	int_converter(const std::string& str);
void	float_converter(const std::string& str);
void	double_converter(const std::string& str);

//Checkers

int		is_scientific(const std::string& str);
bool	checker(const std::string& str, int i);


#endif