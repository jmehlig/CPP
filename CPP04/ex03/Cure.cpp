/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:04:49 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 21:19:57 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
   // std::cout << "Cure constructor called!\n";
}

Cure::~Cure()
{
   // std::cout << "Cure destructor called!\n";
}

Cure *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::Cure(Cure const &c) : AMateria(c) {}

Cure &Cure::operator=(Cure const &c)
{
    if (this == &c)
        return (*this);
    *this = c;
    return (*this);
}