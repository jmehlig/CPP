/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:50:13 by jmehlig           #+#    #+#             */
/*   Updated: 2022/07/11 22:22:46 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Levels getLevel(char *argv[])
{
    std::string arg1(argv[1]);

    if (arg1.compare("DEBUG") == 0)
        return (DEBUG);
    if (arg1.compare("INFO") == 0)
        return (INFO);
    if (arg1.compare("WARNING") == 0)
        return (WARNING);
    if (arg1.compare("ERROR") == 0)
        return (ERROR);
    return (OTHER);
}

int main(int argc, char *argv[])
{
    Harl h;

    if (argc != 2)
        return (1);
    Levels level = getLevel(argv);
    while (level != FINISHED)
        switch (level)
        {
            case DEBUG:
                std::cout << "[ DEBUG ]\n";
                h.complain("debug");
                level = INFO;
                break ;
            case INFO:
                std::cout << "[ INFO ]\n";
                h.complain("info");
                level = WARNING;
                break ;
            case WARNING:
                std::cout << "[ WARNING ]\n";
                h.complain("warning");
                level = ERROR;
                break ;
            case ERROR:
                std::cout << "[ ERROR ]\n";
                h.complain("error");
                level = FINISHED;
                break ;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]\n";
                level = FINISHED;
        }
    return (0);
}