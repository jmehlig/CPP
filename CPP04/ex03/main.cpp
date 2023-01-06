/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:02:26 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/23 21:59:06 by jmehlig          ###   ########.fr       */
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
        std::cout << "-----> " << test->getType() << "\n";
        src->learnMateria(test);
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        std::cout << "-----> " << src->getMemory(1)->getType() << "\n";
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        me->unequip(0);
        me->unequip(1);
        std::cout << "-----> " << me->getInventory(1) << "\n";
        std::cout << "-----> " << tmp->getType() << "\n";
        bob = new Character("bob");
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
    {
        std::cout << "###############" << std::endl;
        std::cout << "#  RolePlay!  #" << std::endl;
        std::cout << "###############" << std::endl;        AMateria    **loot = new AMateria*[8];
        for (int i = 0; i < 8; i++)    {
            if (i < 4)
                loot[i] = new Cure();
            else
                loot[i] = new Ice();
        }
        AMateria **loot_temp = loot;
        ICharacter *Bob = new Character("Bob");
        ICharacter *Liz = new Character("Liz");
        std::cout << std::endl;
        std::cout << "###############" << std::endl;
        std::cout << std::endl;
        for (int i = 0; i < 4; i++) {
            Bob->equip(loot[i]);
        }
        Bob->equip(loot[5]);
        for (int i = 4; i < 8; i++) {
            Liz->equip(loot[i]);
        }
        Bob->use(9, *Liz);
        Liz->use(-1, *Bob);
        Bob->use(0, *Liz);
        Liz->use(2, *Bob);
        Bob->use(1, *Liz);
        Bob->unequip(3);
        Liz->unequip(3);
        std::cout << "###############" << std::endl;
        std::cout << std::endl;
        for(int i = 0; i < 8; i++)
            delete loot[i];
        delete Bob;
        delete Liz;
        delete [] loot;
    }
    //system("leaks a.out");
    return (0);
}