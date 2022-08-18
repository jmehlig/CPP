/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:04:25 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 22:29:09 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <cmath>

class Fixed
{
    private:
        int num_value;
        static const int frac_bits = 8;

    public:
        Fixed();
        Fixed(const int int_value);
        Fixed(const float float_value);
        Fixed(const Fixed &oldFixed);
        Fixed &operator=(const Fixed &fix);
        Fixed operator*(const Fixed &fix);
        Fixed operator+(const Fixed &fix);
        Fixed operator-(const Fixed &fix);
        Fixed operator/(const Fixed &fix);
        bool operator>(const Fixed &fix1) const;
        bool operator>=(const Fixed &fix1) const;
        bool operator<(const Fixed &fix1) const;
        bool operator<=(const Fixed &fix1) const;
        bool operator==(const Fixed &fix1) const;
        bool operator!=(const Fixed &fix1) const;
        Fixed &operator++();
        Fixed operator++(int i);
        Fixed &operator--();
        Fixed operator--(int i);
        ~Fixed();
        float toFloat(void) const;
        int toInt(void) const;
        int isInt() const;
        int getRawBits( void ) const;
        void setRawBits( int const raw);
        static Fixed &min(Fixed &fix1, Fixed &fix2);
        static const Fixed &min(const Fixed &fix1, const Fixed &fix2);
        static Fixed &max(Fixed &fix1, Fixed &fix2);
        static const Fixed &max(const Fixed &fix1, const Fixed &fix2);
};

std::ostream &operator<<(std::ostream &out_stream, const Fixed &fix_num);
