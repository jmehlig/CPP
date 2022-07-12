/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:03:54 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/12 10:04:03 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void Zombie::setName(std::string name_in) { name = name_in; }

std::string Zombie::getName(void) { return (name); }

void Zombie::announce(void) {
  std::string name = getName();
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name_in) {
  name = name_in;
  std::cout << "The Zombie " << name << " got created!" << std::endl;
}

Zombie::~Zombie() {
  std::string name = getName();
  std::cout << "The Zombie " << name << " was destroyed!" << std::endl;
}