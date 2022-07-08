/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:09:57 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/08 13:08:30 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

Weapon HumanB::getWeapon(void) { return (weapon); }

void HumanB::setWeapon(Weapon weapon_in) { weapon = weapon_in; }

std::string HumanB::getName() { return (name); }

void HumanB::setName(std::string name_in) { name = name_in; }

void HumanB::attack(void) {
  if (!weapon.getType().empty())
    std::cout << name << ": attacks with their " << weapon.getType()
              << std::endl;
  else
    std::cout << name << ": tries to attack but does not have a weapon"
              << std::endl;
}

HumanB::HumanB(std::string name_in) {
  name = name_in;
  std::cout << "The HumanB " << name << " was cerated!" << std::endl;
}

HumanB::~HumanB(void) {
  std::cout << "The HumanB " << name << " was destroyed" << std::endl;
}