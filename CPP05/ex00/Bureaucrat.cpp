/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:00:40 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 10:42:52 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade_in) : name(name)
{
    grade = grade_in;
    if (grade_in <= 0)
        throw GradeTooHighException();
    if (grade_in > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "Destructor called!\n";
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

std::string Bureaucrat::getName() const
{
    return (name);
}

void Bureaucrat::incrementGrade()
{
    this->grade--;
    if (grade <= 0)
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    this->grade++;
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &b) : name(b.name), grade(b.grade) {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b)
{
    if (this == &b)
        return (*this);
    *this = b;
    return (*this);
}

std::ostream &operator<<(std::ostream &out_stream, const Bureaucrat &b)
{
	out_stream << "The bureaucrate " << b.getName() << " has the grade " << b.getGrade();
	return (out_stream);
}