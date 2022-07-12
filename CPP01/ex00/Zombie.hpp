/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:04:12 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/12 10:04:15 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    
    public:
        void setName(std::string name);
        std::string getName(void);
        void announce(void);
        Zombie(std::string name);
        ~Zombie();
};