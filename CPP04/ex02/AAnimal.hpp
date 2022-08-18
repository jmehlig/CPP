/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:42:56 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:51:21 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const &old);
        Animal &operator=(Animal const &a);
        virtual ~Animal();
        virtual void makeSound() const = 0;
        std::string getType() const;
};