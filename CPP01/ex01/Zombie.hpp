/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:57:31 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/08 10:19:42 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie
{
    private:
        std::string name;
    
    public:
        void setName(std::string name);
        std::string getName(void);
        void announce(void);
        Zombie();
        Zombie(std::string name);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif 