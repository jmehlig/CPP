/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:27:49 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/16 20:56:27 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public virtual ClapTrap, public ScavTrap, public FragTrap
{
    private:
        std::string name;
        ClapTrap::name;

    public:
        DiamondTrap(std::string name);
        ~DiamondTrap();
        void attack(const std::string& target);
        void whoAmI();
};