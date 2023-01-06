/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:42:00 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/23 21:56:39 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}


Character::Character(std::string const &name) : name(name)
{
   // std::cout << "Construct character " << name << "!\n";
}

Character::~Character()
{
    //std::cout << "Character " << name << " destroyed!\n";
}

std::string const &Character::getName() const
{
    return (name);
}

//keine deep copy!!!
void Character::equip(AMateria* m)
{
    int i = 0;
    while (i < 4)
    {
        if (inventory[i] == 0 || inventory[i]->getType().empty())
        {
            inventory[i] = m;
            break ;
        }
        i++;
    }
}

void Character::unequip(int idx)
{
    if (inventory[idx] != 0)
    {
        inventory[idx] = 0;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 4 || idx < 0)
        return ;
    if (inventory[idx] != 0)
        inventory[idx]->use(target);
}

AMateria *Character::getInventory(int i)
{
    if (i < 0 || i > 4)
        return (0);
    if (inventory[i] != 0)
        return (inventory[i]);
    else
        return (0);
}

Character::Character(Character const &c) : name(c.name)
{
    int i = 0;
    while (i < 4)
    {
        inventory[i] = c.inventory[i];
        i++;
    }
}

Character &Character::operator=(Character const &c)
{
    if (this == &c)
        return (*this);
    *this = c;
    return (*this);
}