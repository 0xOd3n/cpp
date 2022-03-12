/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:56:06 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/10 20:07:59 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# ifndef KAREN_HPP
# define KAREM_HPP

class Karen
{
	private :
				void	debug( void );
				void	info( void );
				void	warning( void );
				void	error( void );
	public :
				void	(Karen::*ptr[4])();
				void complain( std::string level );
				
};

# endif