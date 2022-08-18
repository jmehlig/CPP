/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:54:47 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 21:26:57 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    //std::cout << type << " constructor called!\n";
}

Ice::~Ice()
{
    //std::cout << "Ice destructor called!\n";
}

Ice *Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::Ice(Ice const &i) : AMateria(i) {}

Ice &Ice::operator=(Ice const &i)
{
    if (this == &i)
        return (*this);
    *this = i;
    return (*this);
}