/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:56:34 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/16 20:20:29 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap    Zombie("Zombie");
    ClapTrap    Human("Human");
    ClapTrap    Victim("Victim");
    ScavTrap    Insider("Insider");
    ScavTrap    Guard("Guard");
    FragTrap    FunGuy("FunGuy");

    std::cout << "\n------------------\n\n";

    Zombie.attack("Human");
    Human.takeDamage(Zombie.getAttackDamage());
    Human.attack("Victim");
    Victim.takeDamage(Human.getAttackDamage());
    Human.beRepaired(10);
    Zombie.setAttackDamage(5);
    Zombie.attack("Victim");
    Victim.takeDamage(Zombie.getAttackDamage());
    Zombie.attack("Victim");
    Victim.takeDamage(Zombie.getAttackDamage());
    Zombie.attack("Victim");
    Victim.takeDamage(Zombie.getAttackDamage());

    std::cout << "\n------------------\n\n";

    Victim.beRepaired(20);
    Insider.beRepaired(90);
    Guard.attack("Victim");
    Victim.takeDamage(Guard.getAttackDamage());
    Guard.attack("Zombie");
    Zombie.takeDamage(Guard.getAttackDamage());
    Human.attack("Guard");
    Guard.takeDamage(Human.getAttackDamage());
    Victim.attack("Guard");
    Guard.takeDamage(Victim.getAttackDamage());
    Guard.attack("Insider");
    Insider.takeDamage(Guard.getAttackDamage());

    std::cout << "\n------------------\n\n";

    Insider.attack("FunGuy");
    FunGuy.takeDamage(Insider.getAttackDamage());
    FunGuy.highFivesGuys();
    FunGuy.highFivesGuys();

    std::cout << "\n------------------\n\n";
}