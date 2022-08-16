/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:29:17 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/16 17:09:05 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    //std::cout << "Point constructor called\n";
}

Point::Point(const float x_f, const float y_f) : x(x_f), y(y_f)
{
    //std::cout << x_f << y_f << "    Float Point constructor called \n";
}

Point::Point(const Point &oldPoint) : x(oldPoint.x), y(oldPoint.y)
{
    //std::cout << "Copy Point constructor called\n";
}

Point &Point::operator=(const Point &pt)
{
    *this = Point(pt.x.toFloat(), pt.y.toFloat());
    return (*this);
}

Point::~Point(void)
{
    //std::cout << "Point-deconstructor called \n";
}

Fixed Point::getX() const
{
    return (x);
}

Fixed Point::getY() const
{
    return (y);
}