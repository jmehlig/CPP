/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:42:56 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 10:17:08 by jmehlig          ###   ########.fr       */
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
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
};