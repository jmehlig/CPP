/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:02:26 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 21:26:15 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    {
        IMateriaSource* src = new MateriaSource();
        Ice *test = new Ice();
        //std::cout << "-----> " << test->getType() << "\n";
        src->learnMateria(test);
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        //std::cout << "-----> " << src->getMemory(1)->getType() << "\n";
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        //std::cout << "-----> " << me->getInventory(1)->getType() << "\n";
        //std::cout << "-----> " << tmp->getType() << "\n";
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    {
        AMateria *i = new Ice();
        AMateria *j;
        Ice const k((Ice()));
        j = i;
        std::cout << "-----> " << j->getType() << "\n";
        std::cout << "-----> " << k.getType() << "\n";
    }
}