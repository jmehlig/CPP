/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:46:29 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/22 20:38:41 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
class ICharacter;

class AMateria
{
    protected:
        std::string const type;
    
    public:
        AMateria(std::string const & type);
        AMateria();
        AMateria(AMateria const &m);
        AMateria &operator=(AMateria const &m);
        virtual~AMateria();
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};