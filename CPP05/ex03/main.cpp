/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:08:25 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/24 17:35:47 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

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
    std::cout << "\n---------EX01--TESTS--------\n\n";
    try
    {
        PresidentialPardonForm f("MickeyMouse");
        std::cout << f << "\n";
        Bureaucrat a("Nicki", 9);
        Bureaucrat d("Bob", 50);
        a.signForm(f);
        d.signForm(f);
        std::cout << f << "\n";
        a.signForm(f);
    }
    catch(Form::GradeTooHighException)
    {
        std::cerr << "The grade is too high!\n";
    }
    catch(Form::GradeTooLowException)
    {
        std::cerr << "The grade is too low!\n";
    }
    std::cout << "\n---------EX02--TESTS--------\n\n";
    try
    {
        PresidentialPardonForm f("MickeyMouse");
        std::cout << f << "\n";
        Bureaucrat a("Nicki", 3);
        Bureaucrat d("Bob", 50);
        d.executeForm(f);
        a.signForm(f);
        d.executeForm(f);
        d.signForm(f);
        std::cout << f << "\n";
        a.signForm(f);
        a.executeForm(f);
    }
    catch(Form::GradeTooHighException)
    {
        std::cerr << "The grade is too high!\n";
    }
    catch(Form::GradeTooLowException)
    {
        std::cerr << "The grade is too low!\n";
    }
    try
    {
        RobotomyRequestForm f("MickeyMouse");
        std::cout << f << "\n";
        Bureaucrat a("Nicki", 3);
        Bureaucrat d("Bob", 45);
        d.executeForm(f);
        a.signForm(f);
        d.executeForm(f);
        d.signForm(f);
        std::cout << f << "\n";
        a.signForm(f);
        for (int i = 0; i < 20; i++)
        {
            a.executeForm(f);
        }
    }
    catch(Form::GradeTooHighException)
    {
        std::cerr << "The grade is too high!\n";
    }
    catch(Form::GradeTooLowException)
    {
        std::cerr << "The grade is too low!\n";
    }
    try
    {
        ShrubberyCreationForm f("MickeyMouse");
        std::cout << f << "\n";
        Bureaucrat a("Nicki", 3);
        Bureaucrat d("Bob", 96);
        d.executeForm(f);
        a.signForm(f);
        d.executeForm(f);
        d.signForm(f);
        std::cout << f << "\n";
        a.signForm(f);
        a.executeForm(f);
    }
    catch(Form::GradeTooHighException)
    {
        std::cerr << "The grade is too high!\n";
    }
    catch(Form::GradeTooLowException)
    {
        std::cerr << "The grade is too low!\n";
    }
    std::cout << "\n---------EX03--TESTS--------\n\n";
    try
    {
        Intern I;
        Form *f;
        Bureaucrat a("Nicki", 3);
        f = I.makeForm("presidential", "Victim");
        a.signForm(*f);
        a.executeForm(*f);
        delete f;
        f = I.makeForm("robotomy", "Najas");
        a.signForm(*f);
        a.executeForm(*f);
        delete f;
        f = I.makeForm("shrubbery", "Najas");
        Form *g = I.makeForm("non existent", "me");
        a.signForm(*f);
        a.executeForm(*f);
        delete f;
        system("leaks forms");
    }
    catch(Form::GradeTooHighException)
    {
        std::cerr << "The grade is too high!\n";
    }
    catch(Form::GradeTooLowException)
    {
        std::cerr << "The grade is too low!\n";
    }
    catch(Intern::FormNotFound)
    {
        std::cout << "The given form is not existing!\n";
    }
}