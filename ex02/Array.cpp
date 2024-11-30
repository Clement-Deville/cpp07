/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:13:15 by cdeville          #+#    #+#             */
/*   Updated: 2024/11/30 17:55:26 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template< typename T> Array<T>::Array()
{
	std::cout << "\e[0;32mArray Default constructor called\e[0m" << std::endl;
	this->_my_array = new T[];
}

template< typename T> Array<T>::Array(const Array &Cpy)
{
	std::cout << "\e[0;32mArray Copy constructor called\e[0m" << std::endl;
	*this = Cpy;
}

template< typename T> Array<T> & Array<T>::operator=(const Array &Cpy)
{
	std::cout << "\e[0;32mArray Copy assignement operator called\e[0m" << std::endl;
	if (this == &Cpy)
		return (*this);
	this->_my_array = new T[](Cpy._array);
	return (*this);
}

template< typename T> Array<T>::~Array()
{
	std::cout << "\e[0;31mArray Destructor called\e[0m" << std::endl;
	delete this->_my_array;
}
