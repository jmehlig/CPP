/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:19:20 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:39:38 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <fstream>


class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal &operator=(const WrongAnimal &wrong);
        WrongAnimal(WrongAnimal const &w);
        virtual ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
};