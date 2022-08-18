/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:15:53 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 21:42:44 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(MateriaSource const &m)
{
    int i = 0;
    while (i < 4)
    {
        memory[i] = m.memory[i];
        i++;
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &m)
{
    if (this == &m)
        return (*this);
    *this = m;
    return (*this);
}

MateriaSource::MateriaSource() {}

MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria *materia)
{
    int i = 0;
    // std::cout << "-----> " << materia->getType() << "\n";
    while (i < 4)
    {
        if (memory[i] == 0 || memory[i]->getType().empty())
        {
            memory[i] = materia;
            break ;
        }
        i++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (i < 4)
    {
        if (memory[i] != 0 && memory[i]->getType().compare(type) == 0)
        {
            return(memory[i]->clone());
        }
        i++;
    }
    return (0);
}

AMateria *MateriaSource::getMemory(int i)
{
    if (memory[i] != 0)
        return (memory[i]);
    else
        return (0);
}