/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:57:11 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/23 21:17:16 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

class Brain
{
    public:
        std::string ideas[100];

    public:
        Brain();
        ~Brain();
        Brain(Brain const &b);
        Brain &operator=(Brain const &b);
        std::string getIdeas(int i);
        void setIdeas(std::string s, int i);
};