/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:29:10 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/23 18:24:58 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	private :
				int fp_value;
				static const int frac_bit_val = 8;
	public :
				Fixed();
				Fixed( const Fixed& copy );
				Fixed& operator=( const Fixed& val );
				~Fixed();
				int getRawBits( void ) const;
				void setRawBits( int const raw );
};