/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:24:19 by cdeville          #+#    #+#             */
/*   Updated: 2024/11/29 16:11:56 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <limits>
# include <iomanip>

template<typename T>
void	swap(T &A, T &B);

template<typename T>
T	&min(T &A, T &B);

template<typename T>
T	&max(T &A, T &B);

#endif
