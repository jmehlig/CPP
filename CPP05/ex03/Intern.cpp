/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:30:52 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 16:38:38 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::~Intern() {}

Intern::Intern(Intern const &in) {
    for (int i = 0; i < 9; i++)
        forms[i] = in.forms[i];
}

Intern &Intern::operator=(Intern const &i)
{
    if (this == &i)
        return (*this);
    *this = i;
    return (*this);
}

Intern::Intern()
{
    forms[0] = "presidential";
    forms[1] = "robotomy";
    forms[2] = "shrubbery";
    forms[3] = "presidential pardon";
    forms[4] = "robotomy request";
    forms[5] = "shrubbery creation";
    forms[6] = "PresidentialPardonForm";
    forms[7] = "RobotomyRequestForm";
    forms[8] = "ShrubberyCreationForm"; 
}

Form *Intern::tryMakeForm(int i, std::string target)
{
    switch (i)
    {
        case 0:
            return (new PresidentialPardonForm(target));
        case 1:
            return (new RobotomyRequestForm(target));
        case 2:
            return (new ShrubberyCreationForm(target));
        default:
            return (0);
    }
}

Form *Intern::makeForm(std::string form, std::string target)
{
    int i;
    Form *f = 0;

    for (i = 0; i < 9; i++)
    {
        if (form.compare(forms[i]) == 0)
        {
            f = tryMakeForm(i, target);
            break;
        }
    }
    if (f == 0)
        throw FormNotFound();
    return (f);
}