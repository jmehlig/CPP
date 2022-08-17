/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:46:32 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 16:36:15 by jmehlig          ###   ########.fr       */
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

// AMateria &AMateria::operator=(AMateria &m)
// {
//     if (this == &m)
//         return (*this);
//     strcpy(this->type, m.type);
//     return (*this);
// }