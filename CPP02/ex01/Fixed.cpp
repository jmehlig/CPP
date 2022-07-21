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
    int i = 0;
    while (i < frac_bits)
    {
        frac_num[i] = 0;
        i++;
    }
    std::cout << "Default constructor called\n"; 
}

Fixed::Fixed(const int int_val)
{
    num_value = int_val;
    int i = 0;
    while (i < frac_bits)
    {
        frac_num[i] = 0;
        i++;
    }
    std::cout << "Int constructor called\n"; 
}

Fixed::Fixed(const float float_in)
{
    std::cout << "Float constructor called\n";
    num_value = float_in;
    float float_value = float_in - (float)num_value  + power(0.5, frac_bits);
    float new_val = 0;
    int i = 1;
    while (new_val < float_value)
    {
        if (new_val + power(0.5, i) < float_value)
        {
            new_val = new_val + power(0.5, i);
            frac_num[i - 1] = 1;
        }
        else
            frac_num[i - 1] = 0;
        i++;
    } 
}

//
Fixed::Fixed(const Fixed &oldFixed)
{
    int i = 0;
    std::cout << "Copy constructor called\n";
    this->num_value = oldFixed.num_value;
    while (i < frac_bits)
    {
     this->frac_num[i] = oldFixed.frac_num[i];
     i++;
    }
}

Fixed &Fixed::operator=(const Fixed &fix)
{
    std::cout << "Copy assignment operator called\n";
    if (this == &fix)
        return *this;
    this->num_value = fix.num_value;
    int i = 0;
    while (i < frac_bits)
    {
        this->frac_num[i] = fix.frac_num[i];
        i++;
    }
    return (*this);
}

int *Fixed::getFracNum(void)
{
    return (frac_num);
}

int Fixed::isInt() const
{
    int i = 0;
    while (i < frac_bits)
    {
        if (frac_num[i] != 0)
            return (1);
        i++;
    }
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
    float in_float;

    in_float = (float)num_value;
    int i = 0;
    while (i < frac_bits)
    {
        if (frac_num[i] == 1)
            in_float = in_float + power(0.5, i + 1);
        i++;
    }
    return (roundf(in_float));
}

int Fixed::toInt(void) const 
{
    return (num_value);
}