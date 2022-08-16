/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:56:34 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/16 20:21:19 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    Zombie("Zombie");
    ClapTrap    Human("Human");
    ClapTrap    Victim("Victim");

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
}