/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:00:35 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:52:22 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called!\n"; 
    type = "Cat";
    brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Miaaaaau\n";
}

Cat &Cat::operator=(Cat const &c)
{
    if (this == &c)
        return (*this);
    type = c.type;
    return (*this);
}

Cat::Cat(Cat const &c)
{
    std::cout << "Copy Constructor called\n";
    type = c.type;
}