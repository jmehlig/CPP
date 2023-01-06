/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:10:35 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:12:25 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor for called\n";
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Default constructor for " << name << " called\n";
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor for " << name << " called\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points > 0 && energy_points > 0)
    {
        hit_points = hit_points + amount;
        std::cout << "ClapTrap " << name << " repaired itself and gained \e[;32m" << amount << " \e[0mhit_points and has " << hit_points << " now!\n";
        energy_points--;
    }
    else
        std::cout << "\e[;30mClapTrap " << name << " wanted to repair itself with " << amount << " hit_points, but it was just a dream!\e[0m\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points == 0)
        std::cout << "\e[;30mClapTrap " << name << " got attacked but was already dead!\e[0m\n";
    else if (amount > hit_points)
    {
        std::cout << "ClapTrap " << name << " got attacked and lost its remaining \e[;31m" << hit_points << " \e[0mof points!\n";
        hit_points = 0;
    }
    else
    {
        hit_points = hit_points - amount;
        std::cout << "ClapTrap " << name << " got attacked and lost \e[;31m" << amount << " \e[0mpoints, that leaves " << hit_points << " points!\n";
    }
}

//Straaaange
void ClapTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << " causing \e[;31m" << attack_damage << " \e[0mpoints of damage!\n";
        energy_points--;
    }
    else
        std::cout << "\e[;30mClapTrap " << name << " wanted to attack " << target << " with " << attack_damage << " points of damage, but it was just a dream!\e[0m\n";
}

int ClapTrap::getAttackDamage()
{
    return (attack_damage);
}

void ClapTrap::setAttackDamage(int damage)
{
    attack_damage = damage;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &clap)
{
	if (this == &clap)
		return (*this);
	this->name = clap.name;
	this->attack_damage = clap.attack_damage;
	this->hit_points = clap.hit_points;
	this->energy_points = clap.energy_points;
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &src): name(src.name), energy_points(src.energy_points), attack_damage(src.attack_damage), hit_points(src.hit_points)	
{
		std::cout << "Copy Constructor called\n";
}