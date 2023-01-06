/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:12:07 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/16 20:21:05 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor for " << name << " called\n";
    energy_points = 100;
    hit_points = 100;
    attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor for " << name << " called\n";
}

void FragTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout << "FragTrap " << name << " attacks " << target << " causing \e[;31m" << attack_damage << " \e[0mpoints of damage!\n";
        energy_points--;
    }
    else
        std::cout << "\e[;30mFragTrap " << name << " wanted to attack" << target << " with " << attack_damage << " points of damage, but it was just a dream!\e[0m\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " wants to get high fives and is getting them!\n";
}