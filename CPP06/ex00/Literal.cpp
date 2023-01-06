/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Literal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:34:57 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/29 15:30:50 by jmehlig          ###   ########.fr       */
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
    if (str.compare("inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0)
        setType(DOUBLE);
    else if (str.compare("inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0)
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
    return (str);
}

bool str_is_digit(std::string s)
{
    return (s.find_first_not_of("0123456789") == std::string::npos);
}

void Literal::print_output(std::string s)
{
    std::cout << "char: impossible\n"
              << "int: impossible\n"
              << "float: " << s << "f\n"
              << "double: " << s << "\n";
    exit(1);
}

int Literal::input_to_int(std::string s)
{
    long i = 0;

    int j = 0;
    while (s[j])
    {
        if (s[j] != 0)
        {
            if ((static_cast<long>((s[j])) - (long)'0' > INT_MAX - i * 10))
            {
                type = ERROR;
                break ;
            }
            i = (long)i  * 10 + (static_cast<long>((s[j])) - (long)'0');
        }
        j++;
    }
    return (static_cast<int>(i));
}

void Literal::setInput(std::string s)
{
    int len;
    int i;
    
    switch (type)
    {
        case INT:
        {
            if (str_is_digit(s))
                in_int = input_to_int(s);
            else
                type = ERROR;
            break;
        }
        case FLOAT:
        {
            i = s.find_first_of('.');
            len = s.length() - i - 2;
            if (s.compare("inff") == 0)
    	        print_output("-inf");
            else if (s.compare("+inff") == 0)
                print_output("+inf");
            else if (s.compare("nanf") == 0)
                print_output("nan");
            else if (str_is_digit(s.substr(0, i)) && str_is_digit(s.substr(i + 1, len)))
            {
                int j;
                j = input_to_int(s.substr(0, i));
                int k = input_to_int(s.substr(i + 1, len));
                if (k == 0)
                    is_int = true;
                j = j * pow(10, len) + input_to_int(s.substr(i + 1, len));
                in_f = static_cast<float>(j / pow(10, len));
            }
            else
                type = ERROR;
            break;
        }
        case DOUBLE:
        {
            i = s.find_first_of('.');
            int len = s.length() - i - 1;
            if (s.compare("inf") == 0)
    	        print_output("-inf");
            else if (s.compare("+inf") == 0)
                print_output("+inf");
            else if (s.compare("nan") == 0)
                print_output("nan");
            else if (str_is_digit(s.substr(0, i)) && str_is_digit(s.substr(i + 1, len)))
            {
                int j;
                j = input_to_int(s.substr(0, i));
                int k = input_to_int(s.substr(i + 1, len));
                if (k == 0)
                    is_int = true;
                j = j * pow(10, len) + input_to_int(s.substr(i + 1, len));
                in_d = static_cast<float>(j / pow(10, len));
                if (in_d - j == 0)
                    is_int = true;
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
    exit(1);
}

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

void Literal::setInt(int i) { in_int = i; }

void Literal::setFloat(float f) { in_f = f; }

void Literal::setDouble(double d) { in_d = d; }

void Literal::setChar(char c) { in_char = c; }

bool Literal::getIsInt() { return (is_int); }

std::ostream &operator<<(std::ostream &out_stream, Literal &l)
{
    if (l.getInt() <= 32 && l.getInt() >= 0)
        out_stream << "char: Non displayable\n";
    else if (l.getInt() < 0 || l.getInt() > 127)
        out_stream << "char: Impossible\n";
    else
        out_stream << "char: " << l.getChar() << "\n";
    out_stream << "int: " << l.getInt() << "\n";
    out_stream << "float: " << l.getFloat();
    if (l.getIsInt() == true)
        out_stream << ".0";
    out_stream << "f\ndouble: " << l.getDouble();
    if (l.getIsInt() == true)
        out_stream << ".0";
    out_stream << std::endl;
    return (out_stream);
}