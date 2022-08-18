/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:38:29 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 14:52:30 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
class Bureaucrat;

class RobotomyRequestForm : public Form
{    
    private:
        std::string target;
    
    public:
        RobotomyRequestForm();
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &f);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &f);
        RobotomyRequestForm(std::string target);
        virtual void beSigned(Bureaucrat const &b);
        virtual void execute_form(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out_stream, const Form &f);