/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:05:13 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/08 11:29:49 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType(void)
{
    return (type);
}

void Weapon::setType(std::string type_in)
{
    type = type_in;
}

Weapon::Weapon(void)
{
    std::cout << "A weapon was created!" << std::endl;
}

Weapon::Weapon(std::string type_in)
{
    type = type_in;
    std::cout << "A " << type << " was created!" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "A " << type << " weapon was destroyed!" << std::endl;
}
