/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:02:26 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/23 22:04:17 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    {
        Animal *animal_array[10];
        int i = 0;
        while (i < 10)
        {
            if (i % 2)
                animal_array[i] = new Dog();
            else
                animal_array[i] = new Cat();
            i++;
        }
        std::cout << "\n-----------------\n\n";
        i = 0;
        while (i < 10)
        {
            std::cout << i << ": ";
            animal_array[i]->makeSound();
            i++;
        }
        std::cout << "\n-----------------\n\n";
        i = 0;
        while (i < 10)
        {
            std::cout << "\n\n" << i << ": ---------\n";
            delete animal_array[i];
            i++;
        }
        //while (1);
    }
    std::cout << "\n-----------------\n\n";
    {
        //const Animal* meta = new Animal(); //- will give error now, since abstract
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        Cat test;
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        delete j;
        delete i;
    }
    return 0;
}