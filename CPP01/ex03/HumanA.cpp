/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:09:57 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/11 22:36:16 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

Weapon HumanA::getWeapon(void)
{
    return (weapon);
}

void HumanA::setWeapon(Weapon weapon_in)
{
    weapon = weapon_in;
}

std::string HumanA::getName()
{
    return (name);
}

void HumanA::setName(std::string name_in)
{
    name = name_in;
}

void HumanA::attack(void)
{
    if (!weapon.getType().empty())
        std::cout << name << ": attacks with their " << weapon.getType() << std::endl;
    else
        std::cout << name << ": tries to attack but does not have a weapon" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon_in) : name(name), weapon(weapon_in) {
    std::cout << "The HumanA " << name << " was created!" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "The HumanA " << name << " was destroyed" << std::endl;
}