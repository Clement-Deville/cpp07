/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdeville <cdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:23:43 by cdeville          #+#    #+#             */
/*   Updated: 2024/11/30 13:35:39 by cdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template<typename T>
void	set_zero(T &param)
{
	param = 0;
}

template<typename T>
void	print(T &param)
{
	std::cout << param << std::endl;
}

int main( void )
{
	int	tab_int[8] = {1, 2, 3 ,4 ,5 ,6 ,7, 8};

	std::cout <<
	"/**========================================================================\n" <<
	"*               TESTING PRINT NON CONST WITH CONST FUNCTION PARAM\n" <<
	"*========================================================================**/\n"
		<< std::endl;
	::iter(tab_int, 8, print<const int>);

	std::cout <<
	"\n/**========================================================================\n" <<
	"*               TESTING (SET_ZERO FUNCTION) BOTH INT PARAM\n" <<
	"*========================================================================**/\n"
		<< std::endl;
	std::cout << "Before iter:" << std::endl;
	for (int i = 0; i < 8; i++)
		std::cout << "Index: " << i << " Value: "
			<< tab_int[i] << std::endl;
	::iter(tab_int, 8, set_zero<int>);
	std::cout << "\nAfter iter:" << std::endl;
	for (int i = 0; i < 8; i++)
		std::cout << "Index: " << i << " Value: "
			<< tab_int[i] << std::endl;

	std::cout <<
	"\n/**========================================================================\n" <<
	"*               TESTING PRINT WITH BOTH CONST STRING PARAM\n" <<
	"*========================================================================**/\n"
		<< std::endl;

	const std::string string_tab[8] = {"Hello",
							"Bonjour",
							"Hola",
							"Konichiwa",
							"Ciao",
							"Ni hao",
							"Zdras-tvuy-te",};
	::iter(string_tab, 8, print<const std::string>);
	return (0);
}
