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
    if (str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0)
        setType(DOUBLE);
    else if (str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0)
        setType(FLOAT);
    else if (i == 1 && !isdigit(argv[0]))
    {
        setType(CHAR);
        setChar(argv[0]);
    }
    else if (has_point)
    {
        if (argv[i - 1] == 'f')
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

void nan_output()
{
    std::cout << "char: impossible\n"
              << "int: impossible\n"
              << "float: nanf\n"
              << "double: nan\n";
}

int input_to_int(std::string s)
{
    int i = 0;

    int j = 0;
    while (s[j])
    {
        if (s[j] != 0)
            i = i  * 10 + (static_cast<int>((s[j])) - '0');
        j++;
    }
    return (i);
}

void Literal::setInput(std::string s)
{
    //stringstream stream;
    int len;
    int i;
    
    switch (type)
    {
        case INT:
        {
            //fängt keinen Overflow ab und keine negativen Zahlen
            if (str_is_digit(s))
            {
                // stream << s;
                // stream >> in_int;
                in_int = input_to_int(s);
            }
            else
                type = ERROR;
            break;
        }
        case FLOAT:
        {
            i = s.find_first_of('.');
            len = s.length() - i - 2;
            if (s.compare("-inff") == 0)
    	        in_f = std::numeric_limits<float>::min();
            else if (s.compare("+inff") == 0)
                in_f = std::numeric_limits<float>::max();
            else if (s.compare("nanf") == 0)
                nan_output();
            // da fehlt - und nan und inf .... anywaaaay
            else if (str_is_digit(s.substr(0, i)) && str_is_digit(s.substr(i + 1, len)))
            {
                int j;
                j = input_to_int(s.substr(0, i));
                j = j * pow(10, len) + input_to_int(s.substr(i + 1, len));
                in_f = static_cast<float>(j / pow(10, len));
                if (in_f - j == 0)
                    is_int = true;
                // stream << s;
                // stream << in_f;
            }
            else
                type = ERROR;
            break;
        }
        case DOUBLE:
        {
            i = s.find_first_of('.');
            int len = s.length() - i - 1;
            if (s.compare("-inf") == 0)
    	        in_f = std::numeric_limits<double>::min();
            else if (s.compare("+inf") == 0)
                in_f = std::numeric_limits<double>::max();
            else if (s.compare("nan") == 0)
                nan_output();
            // da fehlt -  .... anywaaaay
            else if (str_is_digit(s.substr(0, i)) && str_is_digit(s.substr(i + 1, len)))
            {
                int j;
                j = input_to_int(s.substr(0, i));
                j = j * pow(10, len) + input_to_int(s.substr(i + 1, len));
                in_d = static_cast<float>(j / pow(10, len));
                if (in_d - j == 0)
                    is_int = true;
                // stream << s;
                // stream << in_f;
            }
            else
                type = ERROR;
            break ;
        }
        default:
            break;
    }
}

void Literal::convert_d()
{
    in_char = static_cast<char>(in_d);
    in_f = static_cast<float>(in_d);
    in_int = static_cast<double>(in_d);
}

void Literal::convert_f()
{
    in_char = static_cast<char>(in_f);
    in_int = static_cast<float>(in_f);
    in_d = static_cast<double>(in_f);
}

void Literal::convert_int()
{
    is_int = true;
    in_char = static_cast<char>(in_int);
    in_f = static_cast<float>(in_int);
    in_d = static_cast<double>(in_int);
}

void Literal::convert_c()
{
    is_int = true;
    in_int = static_cast<int>(in_char);
    in_f = static_cast<float>(in_char);
    in_d = static_cast<double>(in_char);
}

void print_error()
{
    std::cout << "char: impossible\n"
              << "int: impossible\n"
              << "float: impossible\n"
              << "double: impossible\n";
}

//CONVERT EXPLICITLY!!!! mit static_cast<type>
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
        case ERROR:
            print_error();
            break ;
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

bool Literal::getIsInt() { return (is_int); }

std::ostream &operator<<(std::ostream &out_stream, Literal &l)
{
    if (l.getInt() <= 32 || l.getInt() > 127)
        out_stream << "char: Non displayable\n";
    else
        out_stream << "char: " << l.getChar() << "\n";
    out_stream << "int: " << l.getInt() << "\n";
    out_stream << "float: " << l.getFloat();
    if (l.getIsInt() == true)
        out_stream << ".0f";
    out_stream << "\ndouble: " << l.getDouble();
    if (l.getIsInt() == true)
        out_stream << ".0";
    out_stream << std::endl;
    return (out_stream);
}