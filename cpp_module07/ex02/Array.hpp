/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbelhac <abbelhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 00:48:04 by abbelhac          #+#    #+#             */
/*   Updated: 2022/04/12 03:05:32 by abbelhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private:
        T *_arr;
        unsigned int _n;
    public:
        class out_of_bound : public std::exception
        {
            const char* what() const throw()
            {
                return ("INDEX OUT OF BOUND");
            }
        };

        Array()
        {
            _arr = 0;
            _n = 0;
        }

        Array(unsigned int n)
        {
            _arr = new T[n];
            _n = n;
        }

        Array(const Array& copy) : _arr(0)
        {
            *this = copy;
        }

        Array&  operator=(const Array& copy)
        {
            if (this != &copy)
            {
                if (this->_arr != 0)
                    delete this->_arr;
                this->_arr = new T[copy._n];
                unsigned int i = -1;
                while (++i < copy._n)
                    this->_arr[i] = copy._arr[i];
                this->_n = copy._n;
            }
            return (*this);
        }

        T&  operator[](unsigned int index) const
        {
            if (index >= _n)
                throw out_of_bound();
            return (_arr[index]);
        }

        T   get_val(unsigned int i)
        {
            return (this->_arr[i]);
        }

        ~Array()
        {
          delete _arr;
        }

        unsigned int    size() const
        {
            return (_n);
        }
};

#endif