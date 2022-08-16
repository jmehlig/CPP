/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:28:33 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/16 20:00:55 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor for " << name << " called\n";
    energy_points = 50;
    hit_points = 100;
    attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor for " << name << " called\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << " causing \e[;31m" << attack_damage << " \e[0mpoints of damage!\n";
        energy_points--;
    }
    else
        std::cout << "\e[;30mScavTrap " << name << " wanted to attack" << target << " with " << attack_damage << " points of damage, but it was just a dream!\e[0m\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate Keeper Mode!\n";
}
