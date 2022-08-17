/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:56:24 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 15:58:30 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *memory[4];
    
    public:
        MateriaSource();
        virtual ~MateriaSource();
        AMateria *getMemory(int i);
        virtual void learnMateria(AMateria *materia);
        virtual AMateria* createMateria(std::string const & type);
};