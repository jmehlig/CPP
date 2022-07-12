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

class Fixed
{
    private:
        int num_value;
        static const int frac_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &oldFixed);
        Fixed &operator=(const Fixed &fix);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw);
};