/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:23:03 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:06:29 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        void attack(const std::string& target);
        ScavTrap(ScavTrap const &old);
		ScavTrap &operator=(ScavTrap const &scav);
        ScavTrap(std::string name);
        ~ScavTrap();
        void guardGate();
};