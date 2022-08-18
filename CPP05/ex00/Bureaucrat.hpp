/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:49:21 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 10:37:05 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

class Bureaucrat
{
    private:
        std::string const name;
        int grade;

    public:
        Bureaucrat(std::string const name, int grade);
        Bureaucrat();
        Bureaucrat(Bureaucrat const &b);
        Bureaucrat &operator=(Bureaucrat const &b);
        class GradeTooHighException : public std::exception {};
        class GradeTooLowException : public std::exception {};
        ~Bureaucrat();
        int getGrade() const;
        std::string getName() const;
        void incrementGrade();
        void decrementGrade();
};

std::ostream &operator<<(std::ostream &out_stream, const Bureaucrat &b);