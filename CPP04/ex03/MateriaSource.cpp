/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:15:53 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 16:26:33 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    memory[0] = 0;
    memory[1] = 0;
    memory[2] = 0;
    memory[3] = 0;
}

MateriaSource::~MateriaSource() {}

//maybe copy constructor needed for Materia
void MateriaSource::learnMateria(AMateria *materia)
{
    int i = 0;
    // std::cout << "-----> " << materia->getType() << "\n";
    // exit(1);
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