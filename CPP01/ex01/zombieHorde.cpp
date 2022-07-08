/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:58:00 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/08 10:27:39 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i;

    i = 0;
    Zombie *newZombies = new Zombie[N];
    while (i < N)
    {
        newZombies[i].setName(name);
        i++;
    }
    return (newZombies);
}