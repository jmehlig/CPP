/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:34:57 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/18 22:31:50 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Literal.hpp"

std::string Literal::findType(char *argv)
{
    std::string str = "";
    bool has_point = false;
    int i = 0;

    while (argv[i] != '\0')
    {
        if (argv[i] == '.')
            has_point = true;
        str = str + argv[i];
        i++;
    }
    if (i == 1 && !isdigit(argv[0]))
    {
        setType(CHAR);
        setChar(argv[0]);
    }
    else if (has_point)
    {
        if (argv[i - 1] == 'f' && str.compare("+inf") != 0 && str.compare("-inf") != 0)
           setType(FLOAT);
        else
            setType(DOUBLE);
    }
    else
        setType(INT);
    // contains . : float or double
    // last f and not -inf or +inf ---> float
    // else double

    //only one char and not digit: char
    // else int
    // error checking in jeweiligen Funktionen
    return (str);
}

bool str_is_digit(std::string s)
{
    return (s.find_first_not_of("0123456789") == std::string::npos);
}

void Literal::setInput(std::string s)
{
    stringstream stream;
    int i;
    
    switch (type)
    {
        case INT:
        {
            if (str_is_digit(s))
            {
                stream << s;
                stream >> in_int;
            }
            else
                type = ERROR;
            break;
        }
        case FLOAT:
        {
            i = s.find_first_of('.');
            // da fehlt - und nan und inf .... anywaaaay
            if (str_is_digit(s.substr(0, i - 1)) && str_is_digit(s.substr(i + 1, s.length() - 2)))
            {
                stream << s;
                stream << in_f;
            }
            else
                type = ERROR;
            break;
        }
        case DOUBLE:
        {
            i = s.find_first_of('.');

            break ;
        }
        default:
            break;
    }
}

void Literal::convert_c()
{
    
}

//CONVERT EXPLICITLY!!!!
void Literal::convert_all()
{
    switch (type)
    {
        case INT:
        {
            convert_int();
            break;
        }
        case FLOAT:
        {
            convert_f();
            break;
        }
        case DOUBLE:
        {
            convert_d();
            break ;
        }
        case CHAR:
        {
            convert_c();
            break ;
        }
    }
}

Literal::Literal() {}

Literal::~Literal() {}

Literal::Literal(Literal &l) : type(l.type), in_int(l.in_int), in_f(l.in_f), in_d(l.in_d), in_char(l.in_char) {}

Literal &Literal::operator=(Literal &l)
{
    if (this == &l)
        return(*this);
    *this = l;
    return(*this);
}

Type Literal::getType() { return(type); }

int Literal::getInt() { return(in_int); }

float Literal::getFloat() { return(in_f); }

double Literal::getDouble() { return(in_d); }

char Literal::getChar() { return(in_char); }

void Literal::setType(Type s) { type = s; }

void Literal::setInt(int i) { i = in_int; }

void Literal::setFloat(float f) { in_f = f; }

void Literal::setDouble(double d) { in_d = d; }

void Literal::setChar(char c) { in_char = c; }