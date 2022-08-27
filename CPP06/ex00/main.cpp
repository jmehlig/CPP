/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:15:02 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 19:34:35 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

int main (int argc, char *argv[])
{
    Literal l;
    std::string in;

    if (argc != 2)
        exit(1);
    in = l.findType(argv[1]);
    l.setInput(in);
    l.convert_all();
    if (!(l.getType() == ERROR || in.compare("nan") || in.compare("nanf")))
        std::cout << l << "\n";
}