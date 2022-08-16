/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:47:34 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/16 17:49:29 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//calculate triangle area
Fixed triangle_area(Point const a, Point const b, Point const c)
{
    Fixed area;

    area = a.getX() * (b.getY() - c.getY());
    area = area + (b.getX() * (c.getY() - a.getY()));
    area = area + (c.getX() * (a.getY() - b.getY()));
    if (area < 0)
        area = area * Fixed(-1);
    area = area / Fixed(2);
    return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed Area41 = triangle_area(a, b, c);
    Fixed Area1 = triangle_area(a, b, point);
    Fixed Area2 = triangle_area(b, c, point);
    Fixed Area3 = triangle_area(c, a, point);
    if (Area1 == 0 || Area2 == 0 || Area3 == 0)
        return (false);
    if (Area1 + Area2 + Area3 == Area41)
        return (true);
    else
        return (false);
}
