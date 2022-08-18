/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:56:01 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:30:33 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default constructor animal called\n";
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal constructor for a " << type << " called!\n"; 
}

Animal::~Animal()
{
    std::cout << "Destructor for animal called\n";
}

void Animal::makeSound() const
{
    std::cout << "Makes indistinguishable animal sounds...\n";
}

std::string Animal::getType() const
{
    return (type);
}

Animal::Animal(Animal const &old)
{
    std::cout << "Animal Copy Constructor called\n";
    type = old.type;
}

Animal &Animal::operator=(Animal const &a)
{
    if (this == &a)
        return (*this);
    type = a.type;
    return (*this);
}