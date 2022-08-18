/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:31:00 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 16:33:30 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Intern
{
    private:
        std::string forms[9];

    public:
        Intern();
        ~Intern();
        Intern(Intern const &i);
        Intern &operator=(Intern const &i);
        class FormNotFound : public std::exception {};
        Form *makeForm(std::string form, std::string target);
        Form *tryMakeForm(int i, std::string target);
};