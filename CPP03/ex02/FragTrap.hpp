/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:12:04 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:20:04 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(FragTrap const &f);
		FragTrap	&operator=(FragTrap const &o);
        void attack(const std::string& target);
        FragTrap(std::string name);
        ~FragTrap();
        void highFivesGuys(void);
};