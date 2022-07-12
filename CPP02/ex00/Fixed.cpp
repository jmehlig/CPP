/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:04:22 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/12 13:46:38 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    num_value = 0;
    std::cout << "Default constructor called\n"; 
}

Fixed::Fixed(const Fixed &oldFixed)
{
    this->num_value = oldFixed.num_value;
    std::cout << "Copy constructor called\n"; 
}

Fixed &Fixed::operator=(const Fixed &fix)
{
    std::cout << "Copy assignment operator called\n"; 
    return ((Fixed &)fix);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n"; 
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n"; 
    return (num_value);
}

void Fixed::setRawBits(int const raw)
{
    num_value = raw;
}