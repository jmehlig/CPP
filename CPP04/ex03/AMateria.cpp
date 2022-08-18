/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:46:32 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 21:01:34 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(std::string const &type_in) : type(type_in)
{
   // std::cout << "AMateria constructor for type " << type << " called!\n";
}

AMateria::~AMateria()
{
   // std::cout << "AMateria destructor for type " << type << " called\n";
}

std::string const &AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    //std::cout << "A materia was used on " << target.getName() << "!\n";
}

AMateria &AMateria::operator=(AMateria const &m)
{
    if (this == &m)
        return (*this);
    *this = m;
    return (*this);
}

AMateria::AMateria(AMateria const &m) : type(m.type) {}
