/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:57:18 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/12 09:43:15 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde = zombieHorde(5, "Bad Guy");
    horde[1].announce();
    horde[1].announce();
    horde[2].announce();
    horde[3].announce();
    horde[4].announce();
    std::cout << horde[3].getName() << std::endl;
    delete[] horde;
    return (1);
}