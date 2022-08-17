/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:49:21 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 11:27:08 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog();
        virtual ~Dog();
        void makeSound() const;
};