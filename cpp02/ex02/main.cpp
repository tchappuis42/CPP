/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchappui <tchappui@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:17:32 by tchappui          #+#    #+#             */
/*   Updated: 2022/08/14 15:29:43 by tchappui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed ( 5.05f) / Fixed( 2 ) );
	Fixed const d( Fixed ( 5.05f) + Fixed( 5.05f) );
	Fixed const e( Fixed ( 5.05f) - Fixed( 5.05f) );
 
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;

	std::cout << "min(a,b) = " << Fixed::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;
	return 0;
}