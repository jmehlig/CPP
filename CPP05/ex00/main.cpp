/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:08:25 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 10:43:39 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Bob", 1);
        std::cout << a << "\n";
    }
    catch(Bureaucrat::GradeTooHighException)
    {
        std::cerr << "The grade is too high!\n";
    }
    catch(Bureaucrat::GradeTooLowException)
    {
        std::cerr << "The grade is too low!\n";
    }
    std::cout << "\n-----------------\n\n";
    try
    {
        Bureaucrat a("God", 0);
        std::cout << a << "\n";
    }
    catch(Bureaucrat::GradeTooHighException)
    {
        std::cerr << "The grade is too high!\n";
    }
    catch(Bureaucrat::GradeTooLowException)
    {
        std::cerr << "The grade is too low!\n";
    }
    std::cout << "\n-----------------\n\n";
    try
    {
        Bureaucrat c("Nadja", 200);
    }
    catch(Bureaucrat::GradeTooHighException)
    {
        std::cerr << "The grade is too high!\n";
    }
    catch(Bureaucrat::GradeTooLowException)
    {
        std::cerr << "The grade is too low!\n";
    }
    std::cout << "\n-----------------\n\n";
    try
    {
        Bureaucrat d("Bob", 50);
        while (1)
        {
            d.decrementGrade();
            std::cout << d << "\n";
        }
    }
    catch(Bureaucrat::GradeTooHighException)
    {
        std::cerr << "The grade is too high!\n";
    }
    catch(Bureaucrat::GradeTooLowException)
    {
        std::cerr << "The grade is too low!\n";
    }
    std::cout << "\n-----------------\n\n";
    try
    {
        Bureaucrat g("Nina", 50);
        while (1)
        {
            g.incrementGrade();
            std::cout << g << "\n";
        }
    }
    catch(Bureaucrat::GradeTooHighException)
    {
        std::cerr << "The grade is too high!\n";
    }
    catch(Bureaucrat::GradeTooLowException)
    {
        std::cerr << "The grade is too low!\n";
    }
}