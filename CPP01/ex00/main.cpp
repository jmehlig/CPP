/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:05:14 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/12 10:05:18 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie *Zombie1 = newZombie("First");
    randomChump("Random1");
    Zombie *Zombie2 = newZombie("Second");
    Zombie1->announce();
    Zombie2->announce();
    delete Zombie1;
    delete Zombie2;
    return (1);
}