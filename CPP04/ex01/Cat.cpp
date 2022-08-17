/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:00:35 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 11:15:14 by jmehlig          ###   ########.fr       */
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