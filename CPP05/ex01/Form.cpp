/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:49:20 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 14:18:01 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : grade_to_sign(150), grade_to_execute(150) {}

Form::~Form() {}

Form::Form(std::string const n, int sign, int ex) : name(n), grade_to_sign(sign), grade_to_execute(ex)
{
    is_signed = false;
    if (sign <= 0)
        throw GradeTooHighException();
    if (sign > 150)
        throw GradeTooLowException();
    if (ex <= 0)
        throw GradeTooHighException();
    if (ex > 150)
        throw GradeTooLowException();
}

Form::Form(Form const &f) : name(f.name), is_signed(f.is_signed), grade_to_sign(f.grade_to_sign), grade_to_execute(f.grade_to_execute)
{
    if (f.grade_to_sign <= 0)
        throw GradeTooHighException();
    if (f.grade_to_sign > 150)
        throw GradeTooLowException();
    if (f.grade_to_execute <= 0)
        throw GradeTooHighException();
    if (f.grade_to_execute > 150)
        throw GradeTooLowException();    
}

Form &Form::operator=(Form const &f)
{
    if (this == &f)
        return (*this);
    *this = f;
    return (*this);
}

std::string Form::getName() const { return(name); }

bool Form::getIsSigned() const { return(is_signed); }

int Form::getGradeToSign() const { return(grade_to_sign); }

int Form::getGradeToExecute() const { return(grade_to_execute); }

void Form::setIsSigned(bool isSigned) { is_signed = isSigned; }

void Form::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > grade_to_sign)
        throw Form::GradeTooLowException();
    else if (is_signed == true)
        throw Form::AlreadySignedException();
    else
        this->setIsSigned(true);
}

std::ostream &operator<<(std::ostream &out_stream, const Form &f)
{
    out_stream << "The Form " << f.getName();
    if (f.getIsSigned())
        out_stream << " is already signed, therefore a grade of " << f.getGradeToSign() << " was needed to sign";
    else
        out_stream << " is not signed, a grade of " << f.getGradeToSign() << " is needed to sign";
    out_stream << " and it will need a grade of " << f.getGradeToExecute() << " to execute the form!\n";
    return (out_stream);
}
