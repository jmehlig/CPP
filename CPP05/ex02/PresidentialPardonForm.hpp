/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:49:00 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 14:34:23 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
class Bureaucrat;

class PresidentialPardonForm : public Form
{    
    private:
        std::string target;
    
    public:
        PresidentialPardonForm();
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &f);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &f);
        PresidentialPardonForm(std::string target);
        virtual void beSigned(Bureaucrat const &b);
        virtual void execute_form(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out_stream, const Form &f);