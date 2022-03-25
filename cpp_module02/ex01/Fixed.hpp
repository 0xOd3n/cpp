/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:29:10 by abbelhac          #+#    #+#             */
/*   Updated: 2022/03/25 20:40:33 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private :
				int fp_value;
				static const int frac_bit_val = 8;
	public :
				Fixed();
				Fixed(const int value);
				Fixed(const float value);
				Fixed( const Fixed& copy );
				Fixed& operator=( const Fixed& val );
				std::ostream&	operator<<(std::ostream &o, const Fixed &fixed);
				~Fixed();
				float	toFloat(void) const;
				int		toInt(void) const;
				int getRawBits( void ) const;
				void setRawBits( int const raw );
};

# endif