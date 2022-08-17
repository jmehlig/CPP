/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:00:35 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 10:06:54 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructor called!\n"; 
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const
{
    std::cout << "Miaaaaau\n";
}