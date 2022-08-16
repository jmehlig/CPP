/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:04:03 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/16 17:55:27 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

// int main( void ) 
// {
//     Point const *A = new Point(7, 0);
//     Point const B(6, 6);
//     Point const C(0, 4);
//     Point const P(1, 1);
//     Point const Q(5, 3);

    
//     bool in_or_out = bsp(*A, B, C, P);
//     if (in_or_out)
//         std::cout << "The point is in the triangle!\n";
//     else
//         std::cout << "The point is NOT in the triangle!\n";
//     in_or_out = bsp(*A, B, C, Q);
//     if (in_or_out)
//         std::cout << "The point is in the triangle!\n";
//     else
//         std::cout << "The point is NOT in the triangle!\n";
//     delete A;
//     return 0;
// }

#include <iostream>

#include "Point.hpp"

int main( void ) {
{

	Point	a(1, 2);

	Point	b(3, 3);

	Point	c(5.5f, 1);

	Point	d(1, 2);

	std::cout << "****************" << std::endl;

	std::cout << "Triangle: ";

	//std::cout << a << ", " << b << ", " << c << std::endl;

	std::cout << "(" << d.getX() << ", " << d.getY() << ")";

	if (bsp(a, b, c, d))

		std::cout << " is inside of the triangle" << std::endl;

	else

		std::cout << " is not inside of the triangle" << std::endl;

}

{

	const Point a;

	const Point b(42, 0);

	const Point c(0, 42);

	const Point d(1, 1);

	std::cout << "Triangle: ";

	//std::cout << a << ", " << b << ", " << c << std::endl;

	//std::cout << d;
    std::cout << "(" << d.getX() << ", " << d.getY() << ")";

	if (bsp(a, b, c, d))

		std::cout << " is inside of the triangle" << std::endl;

	else

		std::cout << " is not inside of the triangle" << std::endl;

}

{

	Point a(-2.5, 0);

	Point b(2.5, 0);

	Point c(0, 2.5);

	Point d(0, 1);

//	Point d(0, 1);

	std::cout << "Triangle: ";

	//std::cout << a << ", " << b << ", " << c << std::endl;

	//std::cout << d;
    std::cout << "(" << d.getX() << ", " << d.getY() << ")";

	if (bsp(a, b, c, d))

		std::cout << " is inside of the triangle" << std::endl;

	else

		std::cout << " is not inside of the triangle" << std::endl;

}

	return (0);

}


