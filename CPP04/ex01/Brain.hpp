/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:57:11 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/17 20:45:50 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        ~Brain();
        Brain(Brain const &b);
        Brain &operator=(Brain const &b);
};