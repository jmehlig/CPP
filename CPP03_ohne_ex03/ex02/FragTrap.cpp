/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:12:07 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:24:59 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap constructor called\n";
    energy_points = 100;
    hit_points = 100;
    attack_damage = 30;
}

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
    if (hit_points > 0 && energy_points > 0)
        std::cout << "FragTrap " << name << " wants to get high fives and is getting them!\n";
    else
        std::cout << "\e[;30mFragTrap " << name << " wanted to high five, but it was just a dream!\e[0m\n";
}

FragTrap	&FragTrap::operator=(FragTrap const &f)
{
	if (this == &f)
		return (*this);
	this->name = f.name;
	this->attack_damage = f.attack_damage;
	this->hit_points = f.hit_points;
	this->energy_points = f.energy_points;
	return (*this);
}

FragTrap::FragTrap(FragTrap const &f)
{
	std::cout << "Copy Constructor called\n";
    this->name = f.name;
	this->attack_damage = f.attack_damage;
	this->hit_points = f.hit_points;
	this->energy_points = f.energy_points;
}