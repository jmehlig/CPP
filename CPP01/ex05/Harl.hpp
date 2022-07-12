/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:16:51 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/12 09:30:58 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <map>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        //std::map<std::string, void(Harl::*)()> functions;
        std::string Levels[4];
        void setLevels();
        void(Harl::*Functions[4])();
        void setFunctions();
        void (Harl::*fcnptr)();

    public:
        void complain( std::string level );
};