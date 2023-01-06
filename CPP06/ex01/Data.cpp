/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:07:17 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/29 18:07:20 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {}

Data::~Data() {}

Data::Data(Data &d) : test_ob(d.test_ob) {}

Data &Data::operator=(Data &d)
{
    if (this == &d)
        return (*this);
    *this = d;
    return (*this);
}

int Data::getTest() { return (test_ob); }

void Data::setTest( int i ) { test_ob = i; }

