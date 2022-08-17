/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:02:26 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 11:30:35 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

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
        //const Animal* meta = new Animal(); - will give error now, since abstract
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        const WrongAnimal* wrong = new WrongCat();
        Cat test;
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        std::cout << "The Wrong Cat ";
        wrong->makeSound();
        std::cout << " '------>  oh no!\n";
        delete j;
        delete i;
        delete wrong;
        //while(1);
    }
    return 0;
}