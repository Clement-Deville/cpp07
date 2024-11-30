/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:12:07 by cdeville          #+#    #+#             */
/*   Updated: 2024/11/30 17:22:03 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array
{
private:
	T	*_my_array;
public:
	Array();
	Array(const Array &Cpy);
	virtual ~Array() = 0;

	Array &operator=(const Array &Cpy);
};


#endif
