/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:09:57 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/08 11:39:05 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

Weapon *HumanA::getWeapon(void)
{
    return (weapon);
}

void HumanA::setWeapon(Weapon weapon_in)
{
    weapon = &weapon_in;
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
    if (!weapon->getType().empty())
        std::cout << name << ": attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << ": tries to attack but does not have a weapon" << std::endl;
}

HumanA::HumanA(std::string name_in, Weapon weapon_in)
{
    weapon = &weapon_in;
    name = name_in;
    std::cout << "The HumanA " << name << " was cerated!" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "The HumanA " << name << " was destroyed" << std::endl;
}