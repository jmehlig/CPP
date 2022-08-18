/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:48:51 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 14:49:30 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidental", 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidental", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &f) : Form(f), target(f.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &f)
{
    if (this == &f)
        return (*this);
    *this = f;
    return (*this);
}

void PresidentialPardonForm::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > this->getGradeToSign())
        throw Form::GradeTooLowException();
    else if (this->getIsSigned() == true)
        throw Form::AlreadySignedException();
    else
        this->setIsSigned(true);
}

std::ostream &operator<<(std::ostream &out_stream, const PresidentialPardonForm &f)
{
    out_stream << "The PresidentialPardonForm " << f.getName();
    if (f.getIsSigned())
        out_stream << " is already signed, therefore a grade of " << f.getGradeToSign() << " was needed to sign";
    else
        out_stream << " is not signed, a grade of " << f.getGradeToSign() << " is needed to sign";
    out_stream << " and it will need a grade of " << f.getGradeToExecute() << " to execute the form!\n";
    return (out_stream);
}

void PresidentialPardonForm::execute_form(Bureaucrat const & executor) const
{
    std::cout << "The target " << target << " has been pardoned by Zaphod Beeblebrox\n";
}