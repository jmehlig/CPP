/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:21:25 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:44:47 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat constructor called!\n"; 
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Miaaaaau\n";
}

WrongCat::WrongCat(WrongCat const &w)
{
    std::cout << "Copy Constructor called\n";
    type = w.type;
}

WrongCat &WrongCat::operator=(WrongCat const &w)
{
    if (this == &w)
        return (*this);
    type = w.type;
    return (*this);
}