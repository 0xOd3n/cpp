/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:42:04 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/11 22:11:04 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T *arr, int len, void(*f)(const T& elem))
{
    int i = 0;

    while (i < len)
    {
        f(arr[i]);
        i++;
    }
}

class Awesome
{
public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
    o << rhs.get();
    return o;
}

template< typename T >
void print( T const & x ) {
    std::cout << x << std::endl;
    return;
}

# endif