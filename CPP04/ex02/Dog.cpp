/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 09:55:30 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/23 21:19:30 by jmehlig          ###   ########.fr       */
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

Dog &Dog::operator=(Dog const &d)
{
    if (this == &d)
        return (*this);
    type = d.type;
    return (*this);
}

Dog::Dog(Dog const &d)
{
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdeas(d.brain->getIdeas(i), i);
    std::cout << "Copy Constructor called\n";
    type = d.type;
}