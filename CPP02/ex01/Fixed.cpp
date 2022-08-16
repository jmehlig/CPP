/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:04:22 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/16 12:43:08 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static int power(float a, int b)
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

Fixed::Fixed(const int int_val)
{
    std::cout << "Int constructor called\n"; 
    num_value = int_val << this->frac_bits;
}

Fixed::Fixed(const float float_in)
{
    std::cout << "Float constructor called\n";
    num_value = roundf(float_in * power(2, this->frac_bits));
}

//
Fixed::Fixed(const Fixed &oldFixed)
{
    std::cout << "Copy constructor called\n";
    *this = oldFixed;
}

Fixed &Fixed::operator=(const Fixed &fix)
{
    std::cout << "Copy assignment operator called\n";
    if (this == &fix)
        return *this;
    this->num_value = fix.num_value;
    return (*this);
}
int Fixed::isInt() const
{
    float f = (float)this->num_value / power(2, this->frac_bits);
    int f_int = (int)f;
    if (f - f_int > 0)
        return (1);
    else
        return (0);
}

std::ostream &operator<<(std::ostream &out_stream, const Fixed &fix_num)
{
    if (fix_num.isInt() == 0)
        out_stream << fix_num.toInt();
    else
        out_stream << fix_num.toFloat();
    return (out_stream);
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

float Fixed::toFloat(void) const
{
    float f;

    f = (float)this->num_value / power(2, this->frac_bits);
    return (f);
}

int Fixed::toInt(void) const 
{
    return (this->num_value >> this->frac_bits);
}