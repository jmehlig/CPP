/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:49:35 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/12 09:38:02 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <map>

enum Levels
{
    DEBUG = 0,
    INFO = 1,
    WARNING = 2,
    ERROR = 3,
    OTHER = 4,
    FINISHED = 5
};

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