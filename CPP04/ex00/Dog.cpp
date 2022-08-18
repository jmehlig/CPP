/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:55:30 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:35:41 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructor called!\n"; 
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const
{
    std::cout << "Bark Bark! Wuff Wuff\n";
}

Dog &Dog::operator=(Dog const &d)
{
    if (this == &d)
        return (*this);
    type = d.type;
    return (*this);
}

Dog::Dog(Dog const &d)
{
    std::cout << "Copy Constructor called\n";
    type = d.type;
}