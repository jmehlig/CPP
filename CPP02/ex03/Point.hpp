/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:24:40 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/16 17:05:04 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &oldPoint);
        Point &operator=(const Point &pt);
        Fixed getX() const;
        Fixed getY() const;
        ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);