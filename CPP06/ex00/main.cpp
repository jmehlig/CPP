/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:15:02 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/29 13:40:17 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

void ft_negative(Literal *l)
{
    if (l->getType() == INT)
        l->setInt(-1 * l->getInt());
    if (l->getType() == DOUBLE)
        l->setDouble(-1 * l->getDouble());
    if (l->getType() == FLOAT)
        l->setFloat(-1 * l->getFloat());
}

int main (int argc, char *argv[])
{
    Literal l;
    std::string in;
    bool is_negative = false;

    if (argc != 2)
        exit(1);
    if (strcmp(argv[1], "inf") == 0 || strcmp(argv[1], "inff") == 0)
        l.print_output("inf");
    if ((argv[1][0] == '-') || (argv[1][0] == '+') && argv[1][1])
    {
        in = l.findType(&argv[1][1]);
        if (argv[1][0] == '-')
            is_negative = true;
    }
    else
        in = l.findType(argv[1]);
    l.setInput(in);
    if (is_negative == true)
        ft_negative(&l);
    l.convert_all();
    if (!(l.getType() == ERROR))
        std::cout << l;
}