/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:52:38 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/29 18:05:33 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    char c1 = 'a';
    char c2 = '*';

    std::cout << "Before the swap c1 = " << c1 << " and c2 = " << c2 << std::endl;
    ::swap(c1, c2);
    std::cout << "After the swap c1 = " << c1 << " and c2 = " << c2 << std::endl;
    std::cout << "min( c1, c2 ) = " << ::min( c1, c2 ) << std::endl;
    std::cout << "max( c1, c2 ) = " << ::max( c1, c2 ) << std::endl;
    
    return 0;
}