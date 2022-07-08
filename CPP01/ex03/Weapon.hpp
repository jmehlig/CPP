/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:02:43 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/08 11:07:07 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        std::string getType(void);
        void setType(std::string type);
        Weapon();
        Weapon(std::string type);
        ~Weapon(void);
};