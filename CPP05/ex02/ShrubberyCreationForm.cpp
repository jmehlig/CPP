/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:49:20 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 12:58:20 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &f) : Form(f), target(f.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &f)
{
    if (this == &f)
        return (*this);
    *this = f;
    return (*this);
}

void ShrubberyCreationForm::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > this->getGradeToSign())
        throw Form::GradeTooLowException();
    else if (this->getIsSigned() == true)
        throw Form::AlreadySignedException();
    else
        this->setIsSigned(true);
}

std::ostream &operator<<(std::ostream &out_stream, const ShrubberyCreationForm &f)
{
    out_stream << "The ShrubberyCreationForm " << f.getName();
    if (f.getIsSigned())
        out_stream << " is already signed, therefore a grade of " << f.getGradeToSign() << " was needed to sign";
    else
        out_stream << " is not signed, a grade of " << f.getGradeToSign() << " is needed to sign";
    out_stream << " and it will need a grade of " << f.getGradeToExecute() << " to execute the form!\n";
    return (out_stream);
}

void print_rand_tree(std::ofstream &out_stream)
{
    out_stream << "    " << rand() % 10 << "    \n";
    out_stream << "   / \\   \n";
    out_stream << "  " << rand() % 10 << "   " << rand() % 10 << "   \n";
    out_stream << " / \\ / \\\n";
    out_stream << rand() % 10 << "  " << rand() % 10 << " " << rand() % 10 << "  " << rand() % 10 << "\n\n";
}

void ShrubberyCreationForm::execute_form(Bureaucrat const & executor) const
{
    std::ofstream out_stream;

    out_stream.open(target + "_shrubbery", std::ios::out);
    if (!out_stream.is_open())
        return ;
    out_stream << "    c    \n";
    out_stream << "   / \\   \n";
    out_stream << "  3   x   \n";
    out_stream << " / \\ / \\\n";
    out_stream << "a  c d  a\n\n";
    for (int i = 0; i < (rand() % 20); i++)
        print_rand_tree(out_stream);
    out_stream.close();
}