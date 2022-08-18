/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:04:03 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 22:31:43 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int main( void ) 
// {
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
//     std::cout << Fixed::max( a, b ) << std::endl;
//     std::cout << Fixed(12347.5f) * Fixed(2) << std::endl;
//     return 0;
// }

#include <iostream>

#include "Fixed.hpp"

int main( void ) {

	std::cout << "*****pdf main******" << std::endl;

	Fixed a;

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;

	std::cout << ++a << std::endl;

	std::cout << a << std::endl;

	std::cout << a++ << std::endl;

	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "*****pdf main end******" << std::endl;


	std::cout << "a: " << a << std::endl;

	std::cout << "b: " << b << std::endl;


	if (a < b)

		std::cout << "a < b" << std::endl;

	if (b > a)

		std::cout << "b > a" << std::endl;

	if (b!=a)

		std::cout << " b != a" << std::endl;

	Fixed	c(a);

	std::cout << "c: " << c << std::endl;

	if (a == c)

		std::cout << "a == c" << std::endl;

	if (a >= c)

		std::cout << "a >= c" << std::endl;

	if (a <= c && a <= b)

		std::cout << "a <= c && a <= b" << std::endl;

	if (a >= c && b >= a)

		std::cout << "a >= c && b >= a" << std::endl;


	std::cout << "max(" << a << ", " << b << ") " << Fixed::max( a, b ) << std::endl;

	std::cout << "min(" << a << ", " << b << ") " << Fixed::min( a, b ) << std::endl;


	std::cout << "max(" << a << ", " << c << ") " << Fixed::max( a, c ) << std::endl;

	std::cout << "min(" << a << ", " << c << ") " << Fixed::min( a, c ) << std::endl;


	Fixed	x(4);

	Fixed	y(0.5f);

	std::cout << "x + y = " << x + y << std::endl;
	std::cout << "x - y = " << x - y << std::endl;
	std::cout << "x * y = " << x * y << std::endl;
	std::cout << "x / y = " << x / y << std::endl;

		return 0;

}
