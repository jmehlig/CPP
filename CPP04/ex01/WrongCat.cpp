/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:21:25 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 10:37:30 by jmehlig          ###   ########.fr       */
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