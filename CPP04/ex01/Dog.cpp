/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:55:30 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 11:15:22 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called!\n"; 
    type = "Dog";
    brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Bark Bark! Wuff Wuff\n";
}