/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:52:02 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/12 00:08:48 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T& x, T& y)
{
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T	min(T min, T max)
{
    return (min < max) ? min : max;
}

template <typename T>
T	max(T min, T max)
{
    return (min > max) ? min : max;
}

class Awesome
{
private:
    int _n;

public:
    Awesome(void) : _n(0){};
    Awesome(int n) : _n(n){};
    ~Awesome(void) {};
    Awesome& operator=(Awesome& a) { _n = a._n; return *this; }
    bool operator==(Awesome const & rhs) const { return (this->_n == rhs._n);}
    bool operator!=(Awesome const & rhs) const { return (this->_n != rhs._n);}
    bool operator>(Awesome const & rhs) const { return (this->_n > rhs._n);}
    bool operator<(Awesome const & rhs) const { return (this->_n < rhs._n);}
    bool operator>=(Awesome const & rhs) const { return (this->_n >= rhs._n);}
    bool operator<=(Awesome const & rhs) const { return (this->_n <= rhs._n);}
    int get_n() const { return _n; }
};
std::ostream& operator<<(std::ostream& o, const Awesome& a) {o << a.get_n(); return o; }

#endif
