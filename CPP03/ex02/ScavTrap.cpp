/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:28:33 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:19:00 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called\n";
    energy_points = 50;
    hit_points = 100;
    attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &s)
{
	std::cout << "Copy ScavTrap Constructor called" << std::endl;
    name = s.name;
    hit_points = s.hit_points;
    energy_points = s.energy_points;
    attack_damage = s.attack_damage;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &old)	{
	if (this == &old)
		return (*this);
	name = old.name;
    hit_points = old.hit_points;
    energy_points = old.energy_points;
    attack_damage = old.attack_damage;
	return (*this);
}

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
    if (hit_points > 0 && energy_points > 0)
        std::cout << "ScavTrap " << name << " is now in Gate Keeper Mode!\n";
    else
        std::cout << "\e[;30mScavTrap " << name << " wanted to change in Gate Keeper Mode, but it was just a dream!\e[0m\n";
}
