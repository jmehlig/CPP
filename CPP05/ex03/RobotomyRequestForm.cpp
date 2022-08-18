/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:39:16 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 14:54:05 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &f) : Form(f), target(f.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &f)
{
    if (this == &f)
        return (*this);
    *this = f;
    return (*this);
}

void RobotomyRequestForm::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > this->getGradeToSign())
        throw Form::GradeTooLowException();
    else if (this->getIsSigned() == true)
        throw Form::AlreadySignedException();
    else
        this->setIsSigned(true);
}

std::ostream &operator<<(std::ostream &out_stream, const RobotomyRequestForm &f)
{
    out_stream << "The RobotomyRequestForm " << f.getName();
    if (f.getIsSigned())
        out_stream << " is already signed, therefore a grade of " << f.getGradeToSign() << " was needed to sign";
    else
        out_stream << " is not signed, a grade of " << f.getGradeToSign() << " is needed to sign";
    out_stream << " and it will need a grade of " << f.getGradeToExecute() << " to execute the form!\n";
    return (out_stream);
}

void RobotomyRequestForm::execute_form(Bureaucrat const & executor) const
{
    std::cout << "* Makes some drilling noises *\n";
    int i = rand();
    if (i % 2 == 0)
        std::cout << "The target " << target << " has been successfully robotomized\n";
    else
        std::cout << "The robotomy failed!\n";
}