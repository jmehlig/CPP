/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:20:04 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 10:51:28 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default constructor animal called\n";
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "WrongAnimal constructor for a " << type << " called!\n"; 
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor for animal called\n";
}

void WrongAnimal::makeSound() const
{
    std::cout << "Makes indistinguishable animal sounds...\n";
}

std::string WrongAnimal::getType() const
{
    return (type);
}

// WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrong)
// {
//     if (this != &wrong)
//         this->type = wrong.type;
//     return (*this);
// }