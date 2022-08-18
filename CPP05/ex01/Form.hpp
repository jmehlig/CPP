/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:26:52 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 14:18:09 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private:
        std::string const name;
        bool is_signed;
        int const grade_to_sign;
        int const grade_to_execute;
    
    public:
        Form();
        ~Form();
        Form(Form const &f);
        Form &operator=(Form const &f);
        Form(std::string const name, int grade_to_sign, int grade_to_exectute);
        class GradeTooHighException : public std::exception {};
        class GradeTooLowException : public std::exception {};
        class AlreadySignedException : public std::exception {};
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void setIsSigned(bool isSigned);
        void beSigned(Bureaucrat const &b);
};

std::ostream &operator<<(std::ostream &out_stream, const Form &f);