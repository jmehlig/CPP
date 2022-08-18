/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:26:52 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 14:52:36 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
class Bureaucrat;

class ShrubberyCreationForm : public Form
{    
    private:
        std::string target;
    
    public:
        ShrubberyCreationForm();
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &f);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &f);
        ShrubberyCreationForm(std::string target);
        virtual void beSigned(Bureaucrat const &b);
        virtual void execute_form(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out_stream, const Form &f);