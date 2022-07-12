/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:10:01 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/12 09:08:42 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;

    public:
        Weapon getWeapon();
        void setWeapon(Weapon &weapon);
        std::string getName();
        void setName(std::string name);
        void attack();
        HumanB(std::string name);
        ~HumanB();
};