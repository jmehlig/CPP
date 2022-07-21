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

static int power(int a, int b)
{
    int power;

    power = 1;
    while (b > 0)
    {
        power = power * a;
        b--;
    }
    return (power);
}

Fixed::Fixed()
{
    num_value = 0;
    std::cout << "Default constructor called\n"; 
}

//
Fixed::Fixed(const Fixed &oldFixed)
{
    std::cout << "Copy constructor called\n";
    this->num_value = oldFixed.getRawBits();
}

Fixed &Fixed::operator=(Fixed &fix)
{
    std::cout << "Copy assignment operator called\n";
    if (this == &fix)
        return *this;
    this->num_value = fix.getRawBits();
    return (*this);
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