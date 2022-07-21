/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:04:25 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/12 13:41:42 by jmehlig          ###   ########.fr       */
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
        int frac_num[8];

    public:
        Fixed();
        Fixed(const int int_value);
        Fixed(const float float_value);
        Fixed(const Fixed &oldFixed);
        Fixed &operator=(const Fixed &fix);
        ~Fixed();
        float toFloat(void) const;
        int toInt(void) const;
        int isInt() const;
        int *getFracNum(void);
        int getRawBits( void ) const;
        void setRawBits( int const raw);
};

std::ostream &operator<<(std::ostream &out_stream, const Fixed &fix_num);